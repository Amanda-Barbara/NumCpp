#include "NumCppWithOpenCV.hpp"

int test()
{
    // create a ramp image with NumCpp
    constexpr auto numHalfCols = NUM_COLS / 2; // integer division
    auto ncArray = nc::NdArray<nc::uint8>(NUM_ROWS, NUM_COLS);
    for (nc::uint32 row = 0; row < ncArray.numRows(); ++row)
    {
        auto begin = ncArray.begin(row);
        std::iota(begin, begin + numHalfCols, nc::uint8{0});

        auto rbegin = ncArray.rbegin(row);
        std::iota(rbegin, rbegin + numHalfCols, nc::uint8{0});
    }

    // convert to OpenCV Mat
    auto cvArray = cv::Mat(ncArray.numRows(), ncArray.numCols(), CV_8SC1, ncArray.data());

    // display the OpenCV Mat
    cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE); // Create a window for display.
    cv::imshow("Display window", cvArray); // Show our image inside it.
    cv::waitKey(0); // Wait for a keystroke in the window

    // tranpose the Mat with OpenCV
    auto transposedCvArray = cv::Mat(cvArray.cols, cvArray.rows, CV_8SC1);
    cv::transpose(cvArray, transposedCvArray);

    // display the transposed Mat
    cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE); // Create a window for display.
    cv::imshow("Display window", transposedCvArray); // Show our image inside it.
    cv::waitKey(0); // Wait for a keystroke in the window

    // convert the transposed OpenCV Mat to a NumCpp array
    auto transposedNcArray = nc::NdArray<nc::uint8>(transposedCvArray.data, transposedCvArray.rows, transposedCvArray.cols);

    // make sure the two transposed arrays are the same
    if (nc::array_equal(transposedNcArray, ncArray.transpose()))
    {
        std::cout << "Arrays are equal.\n";
    }
    else
    {
        std::cout << "Arrays are not equal.\n";
    }

    return 0;
}

cv::Mat reDefect(cv::Mat img, cv::Mat mask, cv::Mat c_mask, const int id, const int r, const float throd1, const float throd2, const float throd3, const float throd4)
{
// c_mask[:,:,2]为翘曲信息，c_mask[:,:,2]=255表示该像素是翘曲，c_mask[:,:,2]=0表示该像素是正常芯片。
// test_mask 缺陷信息在mask[:,:,1]通道，先将翘曲信息赋值到其他通道，供后续掩码使用
    cv::Mat img0;
    img.copyTo(img0);
    cv::Mat test_mask = cv::Mat::zeros(img0.size(), img0.type());
    int xx = 3;
    int yy = 3;
    for (int row = yy; row < test_mask.rows - yy; row++) {
        uchar* uc_pixel = test_mask.data + row * test_mask.step;
        for (int col = xx; col < test_mask.cols - xx; col++) {
            if (test_mask.channels() == 3)
            {
                uc_pixel[0] = 255;
                uc_pixel[1] = 255;
                uc_pixel[2] = 255;
                uc_pixel += 3;
            }
            else if (test_mask.channels() == 1)
            {
                uc_pixel[0] = 255;
                uc_pixel += 1;
            }
        }
    }

    for (int row = 0; row < xx; row++) {
        int axis = 2 * xx -1;
        int end = img0.rows - 1;
        uchar* uc_pixel_up1 = img0.data + row * img0.step;
        uchar* uc_pixel_up2 = img0.data + (axis - row) * img0.step;
        uchar* uc_pixel_down1 = img0.data + (end - row) * img0.step;
        uchar* uc_pixel_down2 = img0.data + (end - axis + row) * img0.step;
        for (int col = 0; col < img0.cols; col++) {
            if (test_mask.channels() == 3)
            {
                uc_pixel_up1[0] = uc_pixel_up2[0];
                uc_pixel_up1[1] = uc_pixel_up2[1];
                uc_pixel_up1[2] = uc_pixel_up2[2];
                uc_pixel_down1[0] = uc_pixel_down2[0];
                uc_pixel_down1[1] = uc_pixel_down2[1];
                uc_pixel_down1[2] = uc_pixel_down2[2];
                uc_pixel_up1 += 3;
                uc_pixel_up2 += 3;
                uc_pixel_down1 += 3;
                uc_pixel_down2 += 3;
            }
            else if (test_mask.channels() == 1)
            {
                uc_pixel_up1[0] = uc_pixel_up2[0];
                uc_pixel_down1[0] = uc_pixel_down2[0];
                uc_pixel_up1 += 1;
                uc_pixel_up2 += 1;
                uc_pixel_down1 += 1;
                uc_pixel_down2 += 1;
            }
        }
    }

    for (int row = 0; row < img0.rows; row++) {
        uchar* uc_pixel = img0.data + row * img0.step;
        int axis = 2 * yy -1;
        int end = img0.cols - 1;
        for (int col = 0; col < yy; col++) {
            if (test_mask.channels() == 3)
            {
//                uc_pixel[0] = (uc_pixel + test_mask.channels() * (axis - col))[0];
//                uc_pixel[1] = (uc_pixel + test_mask.channels() * (axis - col))[1];
//                uc_pixel[2] = (uc_pixel + test_mask.channels() * (axis - col))[2];
                (uc_pixel + test_mask.channels() * (end - axis + col))[0] =
                        (uc_pixel + test_mask.channels() * (end - col))[0];
                (uc_pixel + test_mask.channels() * (end - axis + col))[1] =
                        (uc_pixel + test_mask.channels() * (end - col))[1];
                (uc_pixel + test_mask.channels() * (end - axis + col))[2] =
                        (uc_pixel + test_mask.channels() * (end - col))[2];
                uc_pixel += 3;
            }
            else if (test_mask.channels() == 1)
            {
//                uc_pixel[0] = (uc_pixel + test_mask.channels() * (axis - col))[0];
                (uc_pixel + test_mask.channels() * (end - axis + col))[0] =
                        (uc_pixel + test_mask.channels() * (end - col))[0];
                uc_pixel +=1;
            }
        }
    }
//    将图片做均值滤波，计算得到原图与滤波后图片的灰度差
    cv::Mat img_mean;
    cv::blur(img0,img_mean,cv::Size(r, r));
    cv::Mat dimg = cv::Mat::zeros(img0.size(), img0.type());

    for (int row = 0; row < img0.rows; row++) {
        uchar* uc_pixel_0      = img0.data + row * img0.step;
        uchar* uc_pixel_mean   = img_mean.data + row * img_mean.step;
        uchar* uc_pixel        = dimg.data + row * dimg.step;
        for (int col = 0; col < img0.cols; col++) {
            if (img0.channels() == 3)
            {
                if (uc_pixel_0[0] > uc_pixel_mean[0])
                    uc_pixel[0] = uc_pixel_0[0] - uc_pixel_mean[0];
                if (uc_pixel_0[1] > uc_pixel_mean[1])
                    uc_pixel[1] = uc_pixel_0[1] - uc_pixel_mean[1];
                if (uc_pixel_0[2] > uc_pixel_mean[2])
                    uc_pixel[2] = uc_pixel_0[2] - uc_pixel_mean[2];
                uc_pixel      += 3;
                uc_pixel_0    += 3;
                uc_pixel_mean += 3;
            }
            else if (img.channels() == 1)
            {
                if (uc_pixel_0[0] > uc_pixel_mean[0])
                    uc_pixel[0] = uc_pixel_0[0] - uc_pixel_mean[0];
                uc_pixel      += 1;
                uc_pixel_0    += 1;
                uc_pixel_mean += 1;
            }
        }
    }
    float img0_mean = 0;
    cv::Scalar img0_mean_scalar = cv::mean(img0);
    if (img0.channels() == 3)
        img0_mean = (img0_mean_scalar.val[0] + img0_mean_scalar.val[1] + img0_mean_scalar.val[2]) / 3.0;
    else
        img0_mean = img0_mean_scalar.val[0];
    float throd = 0.95 * img0_mean;
    int n_mask = 0;
    float sum_mask = 0;
    for (int row = 0; row < img0.rows; row++) {
        uchar* uc_pixel_0      = img0.data + row * img0.step;
        for (int col = 0; col < img0.cols; col++) {
            if (img0.channels() == 3)
            {
                if (float(uc_pixel_0[0]) > throd)
                {
                    n_mask++;
                    sum_mask += float(uc_pixel_0[0]);
                }
                if (float(uc_pixel_0[1]) > throd)
                {
                    n_mask++;
                    sum_mask += float(uc_pixel_0[1]);
                }
                if (float(uc_pixel_0[2]) > throd)
                {
                    n_mask++;
                    sum_mask += float(uc_pixel_0[2]);
                }
                uc_pixel_0    += 3;
            }
            else if (img.channels() == 1)
            {
                if (float(uc_pixel_0[0]) > throd)
                {
                    n_mask++;
                    sum_mask += float(uc_pixel_0[0]);
                }
                uc_pixel_0    += 1;
            }
        }
    }
    float mean = sum_mask / n_mask;
    if (2 * mean < 200)
        float throd5 = 1.8 * mean;
    else
        float throd5 = 200;
//    缺陷识别部分，分几类情况识别
//    对于翘曲上的缺陷，阈值大于throd1，判断为缺陷
    cv::Mat dt = cv::Mat::zeros(dimg.size(), dimg.type());
    for (int row = 0; row < img0.rows; row++) {
        uchar* uc_pixel_test_mask      = test_mask.data + row * test_mask.step;
        uchar* uc_pixel_c_mask         = c_mask.data + row * c_mask.step;
        uchar* uc_pixel_dimg           = dimg.data + row * dimg.step;
        uchar* uc_pixel                = dt.data + row * dt.step;
        for (int col = 0; col < img0.cols; col++) {
            if (img0.channels() == 3)
            {
                if ((float(uc_pixel_dimg[0]) > throd1) && (uc_pixel_test_mask[0] == 255) && (uc_pixel_c_mask[0] == 255))
                    uc_pixel[0] = 255;
                if ((float(uc_pixel_dimg[1]) > throd1) && (uc_pixel_test_mask[1] == 255) && (uc_pixel_c_mask[1] == 255))
                    uc_pixel[1] = 255;
                if ((float(uc_pixel_dimg[2]) > throd1) && (uc_pixel_test_mask[2] == 255) && (uc_pixel_c_mask[2] == 255))
                    uc_pixel[2] = 255;
                uc_pixel      += 3;
                uc_pixel_test_mask    += 3;
                uc_pixel_c_mask += 3;
            }
            else if (img.channels() == 1)
            {
                if ((float(uc_pixel_dimg[0]) > throd1) && (uc_pixel_test_mask[0] == 255) && (uc_pixel_c_mask[0] == 255))
                    uc_pixel[0] = 255;
                uc_pixel      += 1;
                uc_pixel_test_mask    += 1;
                uc_pixel_c_mask += 1;
            }
        }
    }
    return cv::Mat();
}