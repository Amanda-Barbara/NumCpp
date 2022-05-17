#include "NumCpp.hpp"

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <numeric>

constexpr nc::uint32 NUM_ROWS = 512;
constexpr nc::uint32 NUM_COLS = 512;

int test();

cv::Mat reDefect(cv::Mat img, cv::Mat mask, cv::Mat c_mask, const int id, const int r, const float throd1, const float throd2, const float throd3, const float throd4);