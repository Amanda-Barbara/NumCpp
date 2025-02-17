# Installation

## 1. Clone the NumCpp repository from [GitHub](https://github.com/dpilger26/NumCpp)

**NUMCPP_REPO_PATH** = path to clone repository

```console
>> cd <NUMCPP_REPO_PATH>
>> git clone https://github.com/dpilger26/NumCpp.git
```

## 2. Build the install products using CMake

```console
>> cd NumCpp
>> mkdir build
>> cd build
>> cmake ..
```

## 3. Install the includes and CMake target files

On Linux run the following command with `sudo`.  On Windows, you may need to open a cmd prompt or PowerShell with admin privileges.

```console
>> cmake --build . --target install
```

```text
Install the project...
-- Install configuration: "Release"
-- Installing: /usr/local/share/NumCpp/cmake/NumCppTargets.cmake
-- Installing: /usr/local/share/NumCpp/cmake/NumCppConfig.cmake
-- Installing: /usr/local/share/NumCpp/cmake/NumCppConfigVersion.cmake
-- Up-to-date: /usr/local/include
-- Installing: /usr/local/include/NumCpp.hpp
-- Installing: /usr/local/include/NumCpp
-- Installing: /usr/local/include/NumCpp/PythonInterface
-- Installing: /usr/local/include/NumCpp/PythonInterface/BoostNumpyNdarrayHelper.hpp
-- Installing: /usr/local/include/NumCpp/PythonInterface/PybindInterface.hpp
-- Installing: /usr/local/include/NumCpp/PythonInterface/BoostInterface.hpp
-- Installing: /usr/local/include/NumCpp/Coordinates.hpp
-- Installing: /usr/local/include/NumCpp/Special.hpp
-- Installing: /usr/local/include/NumCpp/Filter
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries1d
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries1d/constant1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries1d/mirror1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries1d/addBoundary1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries1d/reflect1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries1d/wrap1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries1d/trimBoundary1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries1d/nearest1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundary.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d/wrap2d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d/reflect2d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d/constant2d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d/mirror2d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d/addBoundary2d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d/trimBoundary2d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d/nearest2d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Boundaries/Boundaries2d/fillCorners.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/maximumFilter.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/gaussianFilter.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/rankFilter.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/laplace.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/percentileFilter.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/complementaryMedianFilter.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/medianFilter.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/convolve.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/minimumFilter.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters2d/uniformFilter.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/complementaryMedianFilter1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/percentileFilter1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/medianFilter1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/rankFilter1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/convolve1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/maximumFilter1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/uniformFilter1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/gaussianFilter1d.hpp
-- Installing: /usr/local/include/NumCpp/Filter/Filters/Filters1d/minimumFilter1d.hpp
-- Installing: /usr/local/include/NumCpp/Random
-- Installing: /usr/local/include/NumCpp/Random/rand.hpp
-- Installing: /usr/local/include/NumCpp/Random/triangle.hpp
-- Installing: /usr/local/include/NumCpp/Random/binomial.hpp
-- Installing: /usr/local/include/NumCpp/Random/beta.hpp
-- Installing: /usr/local/include/NumCpp/Random/uniform.hpp
-- Installing: /usr/local/include/NumCpp/Random/chiSquare.hpp
-- Installing: /usr/local/include/NumCpp/Random/choice.hpp
-- Installing: /usr/local/include/NumCpp/Random/exponential.hpp
-- Installing: /usr/local/include/NumCpp/Random/geometric.hpp
-- Installing: /usr/local/include/NumCpp/Random/f.hpp
-- Installing: /usr/local/include/NumCpp/Random/randN.hpp
-- Installing: /usr/local/include/NumCpp/Random/bernoilli.hpp
-- Installing: /usr/local/include/NumCpp/Random/normal.hpp
-- Installing: /usr/local/include/NumCpp/Random/randFloat.hpp
-- Installing: /usr/local/include/NumCpp/Random/nonCentralChiSquared.hpp
-- Installing: /usr/local/include/NumCpp/Random/laplace.hpp
-- Installing: /usr/local/include/NumCpp/Random/uniformOnSphere.hpp
-- Installing: /usr/local/include/NumCpp/Random/generator.hpp
-- Installing: /usr/local/include/NumCpp/Random/randInt.hpp
-- Installing: /usr/local/include/NumCpp/Random/weibull.hpp
-- Installing: /usr/local/include/NumCpp/Random/studentT.hpp
-- Installing: /usr/local/include/NumCpp/Random/cauchy.hpp
-- Installing: /usr/local/include/NumCpp/Random/discrete.hpp
-- Installing: /usr/local/include/NumCpp/Random/permutation.hpp
-- Installing: /usr/local/include/NumCpp/Random/lognormal.hpp
-- Installing: /usr/local/include/NumCpp/Random/shuffle.hpp
-- Installing: /usr/local/include/NumCpp/Random/standardNormal.hpp
-- Installing: /usr/local/include/NumCpp/Random/extremeValue.hpp
-- Installing: /usr/local/include/NumCpp/Random/negativeBinomial.hpp
-- Installing: /usr/local/include/NumCpp/Random/gamma.hpp
-- Installing: /usr/local/include/NumCpp/Random/poisson.hpp
-- Installing: /usr/local/include/NumCpp/NdArray.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial
-- Installing: /usr/local/include/NumCpp/Polynomial/hermite.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial/chebyshev_u.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial/Poly1d.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial/legendre_q.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial/legendre_p.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial/spherical_harmonic.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial/laguerre.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial/chebyshev_t.hpp
-- Installing: /usr/local/include/NumCpp/Rotations
-- Installing: /usr/local/include/NumCpp/Rotations/DCM.hpp
-- Installing: /usr/local/include/NumCpp/Rotations/rodriguesRotation.hpp
-- Installing: /usr/local/include/NumCpp/Rotations/wahbasProblem.hpp
-- Installing: /usr/local/include/NumCpp/Rotations/Quaternion.hpp
-- Installing: /usr/local/include/NumCpp/Functions.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing.hpp
-- Installing: /usr/local/include/NumCpp/Roots.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing
-- Installing: /usr/local/include/NumCpp/ImageProcessing/Centroid.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/centroidClusters.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/Pixel.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/generateThreshold.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/ClusterMaker.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/applyThreshold.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/windowExceedances.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/Cluster.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/clusterPixels.hpp
-- Installing: /usr/local/include/NumCpp/ImageProcessing/generateCentroids.hpp
-- Installing: /usr/local/include/NumCpp/Integrate
-- Installing: /usr/local/include/NumCpp/Integrate/gauss_legendre.hpp
-- Installing: /usr/local/include/NumCpp/Integrate/romberg.hpp
-- Installing: /usr/local/include/NumCpp/Integrate/trapazoidal.hpp
-- Installing: /usr/local/include/NumCpp/Integrate/simpson.hpp
-- Installing: /usr/local/include/NumCpp/Roots
-- Installing: /usr/local/include/NumCpp/Roots/Dekker.hpp
-- Installing: /usr/local/include/NumCpp/Roots/Newton.hpp
-- Installing: /usr/local/include/NumCpp/Roots/Secant.hpp
-- Installing: /usr/local/include/NumCpp/Roots/Brent.hpp
-- Installing: /usr/local/include/NumCpp/Roots/Bisection.hpp
-- Installing: /usr/local/include/NumCpp/Roots/Iteration.hpp
-- Installing: /usr/local/include/NumCpp/Utils
-- Installing: /usr/local/include/NumCpp/Utils/interp.hpp
-- Installing: /usr/local/include/NumCpp/Utils/powerf.hpp
-- Installing: /usr/local/include/NumCpp/Utils/essentiallyEqual.hpp
-- Installing: /usr/local/include/NumCpp/Utils/gaussian1d.hpp
-- Installing: /usr/local/include/NumCpp/Utils/gaussian.hpp
-- Installing: /usr/local/include/NumCpp/Utils/power.hpp
-- Installing: /usr/local/include/NumCpp/Utils/num2str.hpp
-- Installing: /usr/local/include/NumCpp/Utils/sqr.hpp
-- Installing: /usr/local/include/NumCpp/Utils/value2str.hpp
-- Installing: /usr/local/include/NumCpp/Utils/cube.hpp
-- Installing: /usr/local/include/NumCpp/NdArray
-- Installing: /usr/local/include/NumCpp/NdArray/NdArrayIterators.hpp
-- Installing: /usr/local/include/NumCpp/NdArray/NdArrayCore.hpp
-- Installing: /usr/local/include/NumCpp/NdArray/NdArrayOperators.hpp
-- Installing: /usr/local/include/NumCpp/Integrate.hpp
-- Installing: /usr/local/include/NumCpp/Vector
-- Installing: /usr/local/include/NumCpp/Vector/Vec2.hpp
-- Installing: /usr/local/include/NumCpp/Vector/Vec3.hpp
-- Installing: /usr/local/include/NumCpp/Utils.hpp
-- Installing: /usr/local/include/NumCpp/PythonInterface.hpp
-- Installing: /usr/local/include/NumCpp/Core.hpp
-- Installing: /usr/local/include/NumCpp/Filter.hpp
-- Installing: /usr/local/include/NumCpp/Linalg.hpp
-- Installing: /usr/local/include/NumCpp/Special
-- Installing: /usr/local/include/NumCpp/Special/factorial.hpp
-- Installing: /usr/local/include/NumCpp/Special/cyclic_hankel_2.hpp
-- Installing: /usr/local/include/NumCpp/Special/spherical_hankel_1.hpp
-- Installing: /usr/local/include/NumCpp/Special/comp_ellint_1.hpp
-- Installing: /usr/local/include/NumCpp/Special/comp_ellint_2.hpp
-- Installing: /usr/local/include/NumCpp/Special/beta.hpp
-- Installing: /usr/local/include/NumCpp/Special/bessel_kn_prime.hpp
-- Installing: /usr/local/include/NumCpp/Special/bessel_in.hpp
-- Installing: /usr/local/include/NumCpp/Special/gamma1pm1.hpp
-- Installing: /usr/local/include/NumCpp/Special/airy_bi.hpp
-- Installing: /usr/local/include/NumCpp/Special/pnr.hpp
-- Installing: /usr/local/include/NumCpp/Special/spherical_hankel_2.hpp
-- Installing: /usr/local/include/NumCpp/Special/airy_ai_prime.hpp
-- Installing: /usr/local/include/NumCpp/Special/erf.hpp
-- Installing: /usr/local/include/NumCpp/Special/trigamma.hpp
-- Installing: /usr/local/include/NumCpp/Special/bessel_jn_prime.hpp
-- Installing: /usr/local/include/NumCpp/Special/bessel_kn.hpp
-- Installing: /usr/local/include/NumCpp/Special/bernoulli.hpp
-- Installing: /usr/local/include/NumCpp/Special/spherical_bessel_jn.hpp
-- Installing: /usr/local/include/NumCpp/Special/ellint_2.hpp
-- Installing: /usr/local/include/NumCpp/Special/comp_ellint_3.hpp
-- Installing: /usr/local/include/NumCpp/Special/erfc.hpp
-- Installing: /usr/local/include/NumCpp/Special/airy_ai.hpp
-- Installing: /usr/local/include/NumCpp/Special/bessel_in_prime.hpp
-- Installing: /usr/local/include/NumCpp/Special/log_gamma.hpp
-- Installing: /usr/local/include/NumCpp/Special/softmax.hpp
-- Installing: /usr/local/include/NumCpp/Special/ellint_3.hpp
-- Installing: /usr/local/include/NumCpp/Special/bessel_yn_prime.hpp
-- Installing: /usr/local/include/NumCpp/Special/expint.hpp
-- Installing: /usr/local/include/NumCpp/Special/digamma.hpp
-- Installing: /usr/local/include/NumCpp/Special/spherical_bessel_yn.hpp
-- Installing: /usr/local/include/NumCpp/Special/polygamma.hpp
-- Installing: /usr/local/include/NumCpp/Special/bessel_yn.hpp
-- Installing: /usr/local/include/NumCpp/Special/bessel_jn.hpp
-- Installing: /usr/local/include/NumCpp/Special/erfc_inv.hpp
-- Installing: /usr/local/include/NumCpp/Special/airy_bi_prime.hpp
-- Installing: /usr/local/include/NumCpp/Special/erf_inv.hpp
-- Installing: /usr/local/include/NumCpp/Special/riemann_zeta.hpp
-- Installing: /usr/local/include/NumCpp/Special/gamma.hpp
-- Installing: /usr/local/include/NumCpp/Special/cyclic_hankel_1.hpp
-- Installing: /usr/local/include/NumCpp/Special/cnr.hpp
-- Installing: /usr/local/include/NumCpp/Special/ellint_1.hpp
-- Installing: /usr/local/include/NumCpp/Special/prime.hpp
-- Installing: /usr/local/include/NumCpp/Polynomial.hpp
-- Installing: /usr/local/include/NumCpp/Functions
-- Installing: /usr/local/include/NumCpp/Functions/blackman.hpp
-- Installing: /usr/local/include/NumCpp/Functions/roll.hpp
-- Installing: /usr/local/include/NumCpp/Functions/meshgrid.hpp
-- Installing: /usr/local/include/NumCpp/Functions/interp.hpp
-- Installing: /usr/local/include/NumCpp/Functions/exp.hpp
-- Installing: /usr/local/include/NumCpp/Functions/select.hpp
-- Installing: /usr/local/include/NumCpp/Functions/prod.hpp
-- Installing: /usr/local/include/NumCpp/Functions/load.hpp
-- Installing: /usr/local/include/NumCpp/Functions/imag.hpp
-- Installing: /usr/local/include/NumCpp/Functions/reshape.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nancumprod.hpp
-- Installing: /usr/local/include/NumCpp/Functions/arange.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cov.hpp
-- Installing: /usr/local/include/NumCpp/Functions/logical_not.hpp
-- Installing: /usr/local/include/NumCpp/Functions/mean.hpp
-- Installing: /usr/local/include/NumCpp/Functions/reciprocal.hpp
-- Installing: /usr/local/include/NumCpp/Functions/full_like.hpp
-- Installing: /usr/local/include/NumCpp/Functions/round.hpp
-- Installing: /usr/local/include/NumCpp/Functions/pad.hpp
-- Installing: /usr/local/include/NumCpp/Functions/array_equal.hpp
-- Installing: /usr/local/include/NumCpp/Functions/tofile.hpp
-- Installing: /usr/local/include/NumCpp/Functions/greater_equal.hpp
-- Installing: /usr/local/include/NumCpp/Functions/maximum.hpp
-- Installing: /usr/local/include/NumCpp/Functions/right_shift.hpp
-- Installing: /usr/local/include/NumCpp/Functions/repeat.hpp
-- Installing: /usr/local/include/NumCpp/Functions/partition.hpp
-- Installing: /usr/local/include/NumCpp/Functions/gradient.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanargmax.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cumprod.hpp
-- Installing: /usr/local/include/NumCpp/Functions/hamming.hpp
-- Installing: /usr/local/include/NumCpp/Functions/diagonal.hpp
-- Installing: /usr/local/include/NumCpp/Functions/fromfile.hpp
-- Installing: /usr/local/include/NumCpp/Functions/average.hpp
-- Installing: /usr/local/include/NumCpp/Functions/fmod.hpp
-- Installing: /usr/local/include/NumCpp/Functions/ceil.hpp
-- Installing: /usr/local/include/NumCpp/Functions/asarray.hpp
-- Installing: /usr/local/include/NumCpp/Functions/argmax.hpp
-- Installing: /usr/local/include/NumCpp/Functions/print.hpp
-- Installing: /usr/local/include/NumCpp/Functions/less_equal.hpp
-- Installing: /usr/local/include/NumCpp/Functions/row_stack.hpp
-- Installing: /usr/local/include/NumCpp/Functions/sqrt.hpp
-- Installing: /usr/local/include/NumCpp/Functions/logical_or.hpp
-- Installing: /usr/local/include/NumCpp/Functions/rms.hpp
-- Installing: /usr/local/include/NumCpp/Functions/applyFunction.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cumsum.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nans.hpp
-- Installing: /usr/local/include/NumCpp/Functions/trunc.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanprod.hpp
-- Installing: /usr/local/include/NumCpp/Functions/matmul.hpp
-- Installing: /usr/local/include/NumCpp/Functions/argwhere.hpp
-- Installing: /usr/local/include/NumCpp/Functions/radians.hpp
-- Installing: /usr/local/include/NumCpp/Functions/geomspace.hpp
-- Installing: /usr/local/include/NumCpp/Functions/equal.hpp
-- Installing: /usr/local/include/NumCpp/Functions/sum.hpp
-- Installing: /usr/local/include/NumCpp/Functions/putmask.hpp
-- Installing: /usr/local/include/NumCpp/Functions/array_equiv.hpp
-- Installing: /usr/local/include/NumCpp/Functions/find.hpp
-- Installing: /usr/local/include/NumCpp/Functions/remainder.hpp
-- Installing: /usr/local/include/NumCpp/Functions/signbit.hpp
-- Installing: /usr/local/include/NumCpp/Functions/allclose.hpp
-- Installing: /usr/local/include/NumCpp/Functions/isinf.hpp
-- Installing: /usr/local/include/NumCpp/Functions/fix.hpp
-- Installing: /usr/local/include/NumCpp/Functions/powerf.hpp
-- Installing: /usr/local/include/NumCpp/Functions/sinc.hpp
-- Installing: /usr/local/include/NumCpp/Functions/norm.hpp
-- Installing: /usr/local/include/NumCpp/Functions/alen.hpp
-- Installing: /usr/local/include/NumCpp/Functions/sinh.hpp
-- Installing: /usr/local/include/NumCpp/Functions/diff.hpp
-- Installing: /usr/local/include/NumCpp/Functions/diag.hpp
-- Installing: /usr/local/include/NumCpp/Functions/tanh.hpp
-- Installing: /usr/local/include/NumCpp/Functions/applyPoly1d.hpp
-- Installing: /usr/local/include/NumCpp/Functions/fmin.hpp
-- Installing: /usr/local/include/NumCpp/Functions/place.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nancumsum.hpp
-- Installing: /usr/local/include/NumCpp/Functions/subtract.hpp
-- Installing: /usr/local/include/NumCpp/Functions/less.hpp
-- Installing: /usr/local/include/NumCpp/Functions/arccosh.hpp
-- Installing: /usr/local/include/NumCpp/Functions/max.hpp
-- Installing: /usr/local/include/NumCpp/Functions/copySign.hpp
-- Installing: /usr/local/include/NumCpp/Functions/none.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanmax.hpp
-- Installing: /usr/local/include/NumCpp/Functions/var.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nbytes.hpp
-- Installing: /usr/local/include/NumCpp/Functions/gcd.hpp
-- Installing: /usr/local/include/NumCpp/Functions/swapaxes.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cosh.hpp
-- Installing: /usr/local/include/NumCpp/Functions/isposinf.hpp
-- Installing: /usr/local/include/NumCpp/Functions/shape.hpp
-- Installing: /usr/local/include/NumCpp/Functions/logical_and.hpp
-- Installing: /usr/local/include/NumCpp/Functions/rint.hpp
-- Installing: /usr/local/include/NumCpp/Functions/arctanh.hpp
-- Installing: /usr/local/include/NumCpp/Functions/any.hpp
-- Installing: /usr/local/include/NumCpp/Functions/endianess.hpp
-- Installing: /usr/local/include/NumCpp/Functions/dump.hpp
-- Installing: /usr/local/include/NumCpp/Functions/histogram.hpp
-- Installing: /usr/local/include/NumCpp/Functions/transpose.hpp
-- Installing: /usr/local/include/NumCpp/Functions/kaiser.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cos.hpp
-- Installing: /usr/local/include/NumCpp/Functions/put.hpp
-- Installing: /usr/local/include/NumCpp/Functions/add.hpp
-- Installing: /usr/local/include/NumCpp/Functions/tan.hpp
-- Installing: /usr/local/include/NumCpp/Functions/all.hpp
-- Installing: /usr/local/include/NumCpp/Functions/hstack.hpp
-- Installing: /usr/local/include/NumCpp/Functions/swap.hpp
-- Installing: /usr/local/include/NumCpp/Functions/left_shift.hpp
-- Installing: /usr/local/include/NumCpp/Functions/hammingEncode.hpp
-- Installing: /usr/local/include/NumCpp/Functions/where.hpp
-- Installing: /usr/local/include/NumCpp/Functions/min.hpp
-- Installing: /usr/local/include/NumCpp/Functions/rad2deg.hpp
-- Installing: /usr/local/include/NumCpp/Functions/ldexp.hpp
-- Installing: /usr/local/include/NumCpp/Functions/floor_divide.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanvar.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanpercentile.hpp
-- Installing: /usr/local/include/NumCpp/Functions/degrees.hpp
-- Installing: /usr/local/include/NumCpp/Functions/argsort.hpp
-- Installing: /usr/local/include/NumCpp/Functions/deg2rad.hpp
-- Installing: /usr/local/include/NumCpp/Functions/stdev.hpp
-- Installing: /usr/local/include/NumCpp/Functions/astype.hpp
-- Installing: /usr/local/include/NumCpp/Functions/trapz.hpp
-- Installing: /usr/local/include/NumCpp/Functions/median.hpp
-- Installing: /usr/local/include/NumCpp/Functions/ones.hpp
-- Installing: /usr/local/include/NumCpp/Functions/clip.hpp
-- Installing: /usr/local/include/NumCpp/Functions/arcsinh.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanmedian.hpp
-- Installing: /usr/local/include/NumCpp/Functions/power.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nonzero.hpp
-- Installing: /usr/local/include/NumCpp/Functions/fmax.hpp
-- Installing: /usr/local/include/NumCpp/Functions/conj.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nans_like.hpp
-- Installing: /usr/local/include/NumCpp/Functions/toStlVector.hpp
-- Installing: /usr/local/include/NumCpp/Functions/complex.hpp
-- Installing: /usr/local/include/NumCpp/Functions/zeros.hpp
-- Installing: /usr/local/include/NumCpp/Functions/log1p.hpp
-- Installing: /usr/local/include/NumCpp/Functions/bitwise_or.hpp
-- Installing: /usr/local/include/NumCpp/Functions/unwrap.hpp
-- Installing: /usr/local/include/NumCpp/Functions/bitwise_not.hpp
-- Installing: /usr/local/include/NumCpp/Functions/concatenate.hpp
-- Installing: /usr/local/include/NumCpp/Functions/negative.hpp
-- Installing: /usr/local/include/NumCpp/Functions/diagflat.hpp
-- Installing: /usr/local/include/NumCpp/Functions/corrcoef.hpp
-- Installing: /usr/local/include/NumCpp/Functions/eye.hpp
-- Installing: /usr/local/include/NumCpp/Functions/argmin.hpp
-- Installing: /usr/local/include/NumCpp/Functions/polar.hpp
-- Installing: /usr/local/include/NumCpp/Functions/extract.hpp
-- Installing: /usr/local/include/NumCpp/Functions/amin.hpp
-- Installing: /usr/local/include/NumCpp/Functions/isnan.hpp
-- Installing: /usr/local/include/NumCpp/Functions/divide.hpp
-- Installing: /usr/local/include/NumCpp/Functions/empty.hpp
-- Installing: /usr/local/include/NumCpp/Functions/copy.hpp
-- Installing: /usr/local/include/NumCpp/Functions/frombuffer.hpp
-- Installing: /usr/local/include/NumCpp/Functions/ptp.hpp
-- Installing: /usr/local/include/NumCpp/Functions/log2.hpp
-- Installing: /usr/local/include/NumCpp/Functions/resizeFast.hpp
-- Installing: /usr/local/include/NumCpp/Functions/size.hpp
-- Installing: /usr/local/include/NumCpp/Functions/sort.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cross.hpp
-- Installing: /usr/local/include/NumCpp/Functions/unique.hpp
-- Installing: /usr/local/include/NumCpp/Functions/flipud.hpp
-- Installing: /usr/local/include/NumCpp/Functions/hanning.hpp
-- Installing: /usr/local/include/NumCpp/Functions/mod.hpp
-- Installing: /usr/local/include/NumCpp/Functions/setdiff1d.hpp
-- Installing: /usr/local/include/NumCpp/Functions/floor.hpp
-- Installing: /usr/local/include/NumCpp/Functions/outer.hpp
-- Installing: /usr/local/include/NumCpp/Functions/bitwise_xor.hpp
-- Installing: /usr/local/include/NumCpp/Functions/empty_like.hpp
-- Installing: /usr/local/include/NumCpp/Functions/log.hpp
-- Installing: /usr/local/include/NumCpp/Functions/intersect1d.hpp
-- Installing: /usr/local/include/NumCpp/Functions/copyto.hpp
-- Installing: /usr/local/include/NumCpp/Functions/tile.hpp
-- Installing: /usr/local/include/NumCpp/Functions/around.hpp
-- Installing: /usr/local/include/NumCpp/Functions/centerOfMass.hpp
-- Installing: /usr/local/include/NumCpp/Functions/not_equal.hpp
-- Installing: /usr/local/include/NumCpp/Functions/isneginf.hpp
-- Installing: /usr/local/include/NumCpp/Functions/arctan.hpp
-- Installing: /usr/local/include/NumCpp/Functions/flatten.hpp
-- Installing: /usr/local/include/NumCpp/Functions/fromiter.hpp
-- Installing: /usr/local/include/NumCpp/Functions/count_nonzero.hpp
-- Installing: /usr/local/include/NumCpp/Functions/amax.hpp
-- Installing: /usr/local/include/NumCpp/Functions/flatnonzero.hpp
-- Installing: /usr/local/include/NumCpp/Functions/byteswap.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nansum.hpp
-- Installing: /usr/local/include/NumCpp/Functions/lcm.hpp
-- Installing: /usr/local/include/NumCpp/Functions/replace.hpp
-- Installing: /usr/local/include/NumCpp/Functions/percentile.hpp
-- Installing: /usr/local/include/NumCpp/Functions/exp2.hpp
-- Installing: /usr/local/include/NumCpp/Functions/full.hpp
-- Installing: /usr/local/include/NumCpp/Functions/stack.hpp
-- Installing: /usr/local/include/NumCpp/Functions/logspace.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanmin.hpp
-- Installing: /usr/local/include/NumCpp/Functions/bitwise_and.hpp
-- Installing: /usr/local/include/NumCpp/Functions/greater.hpp
-- Installing: /usr/local/include/NumCpp/Functions/fliplr.hpp
-- Installing: /usr/local/include/NumCpp/Functions/fillDiagnol.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanargmin.hpp
-- Installing: /usr/local/include/NumCpp/Functions/zeros_like.hpp
-- Installing: /usr/local/include/NumCpp/Functions/dot.hpp
-- Installing: /usr/local/include/NumCpp/Functions/invert.hpp
-- Installing: /usr/local/include/NumCpp/Functions/hypot.hpp
-- Installing: /usr/local/include/NumCpp/Functions/ones_like.hpp
-- Installing: /usr/local/include/NumCpp/Functions/proj.hpp
-- Installing: /usr/local/include/NumCpp/Functions/log10.hpp
-- Installing: /usr/local/include/NumCpp/Functions/arccos.hpp
-- Installing: /usr/local/include/NumCpp/Functions/newbyteorder.hpp
-- Installing: /usr/local/include/NumCpp/Functions/angle.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cov_inv.hpp
-- Installing: /usr/local/include/NumCpp/Functions/logical_xor.hpp
-- Installing: /usr/local/include/NumCpp/Functions/flip.hpp
-- Installing: /usr/local/include/NumCpp/Functions/identity.hpp
-- Installing: /usr/local/include/NumCpp/Functions/tri.hpp
-- Installing: /usr/local/include/NumCpp/Functions/binaryRepr.hpp
-- Installing: /usr/local/include/NumCpp/Functions/deleteIndices.hpp
-- Installing: /usr/local/include/NumCpp/Functions/linspace.hpp
-- Installing: /usr/local/include/NumCpp/Functions/union1d.hpp
-- Installing: /usr/local/include/NumCpp/Functions/isclose.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nan_to_num.hpp
-- Installing: /usr/local/include/NumCpp/Functions/trim_zeros.hpp
-- Installing: /usr/local/include/NumCpp/Functions/arcsin.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanstdev.hpp
-- Installing: /usr/local/include/NumCpp/Functions/square.hpp
-- Installing: /usr/local/include/NumCpp/Functions/sign.hpp
-- Installing: /usr/local/include/NumCpp/Functions/ravel.hpp
-- Installing: /usr/local/include/NumCpp/Functions/column_stack.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cbrt.hpp
-- Installing: /usr/local/include/NumCpp/Functions/resizeSlow.hpp
-- Installing: /usr/local/include/NumCpp/Functions/contains.hpp
-- Installing: /usr/local/include/NumCpp/Functions/trace.hpp
-- Installing: /usr/local/include/NumCpp/Functions/logb.hpp
-- Installing: /usr/local/include/NumCpp/Functions/cube.hpp
-- Installing: /usr/local/include/NumCpp/Functions/sin.hpp
-- Installing: /usr/local/include/NumCpp/Functions/arctan2.hpp
-- Installing: /usr/local/include/NumCpp/Functions/real.hpp
-- Installing: /usr/local/include/NumCpp/Functions/inner.hpp
-- Installing: /usr/local/include/NumCpp/Functions/vstack.hpp
-- Installing: /usr/local/include/NumCpp/Functions/bincount.hpp
-- Installing: /usr/local/include/NumCpp/Functions/multiply.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nanmean.hpp
-- Installing: /usr/local/include/NumCpp/Functions/bartlett.hpp
-- Installing: /usr/local/include/NumCpp/Functions/nth_root.hpp
-- Installing: /usr/local/include/NumCpp/Functions/append.hpp
-- Installing: /usr/local/include/NumCpp/Functions/abs.hpp
-- Installing: /usr/local/include/NumCpp/Functions/expm1.hpp
-- Installing: /usr/local/include/NumCpp/Functions/rot90.hpp
-- Installing: /usr/local/include/NumCpp/Functions/minimum.hpp
-- Installing: /usr/local/include/NumCpp/Vector.hpp
-- Installing: /usr/local/include/NumCpp/Coordinates
-- Installing: /usr/local/include/NumCpp/Coordinates/Dec.hpp
-- Installing: /usr/local/include/NumCpp/Coordinates/degreeSeperation.hpp
-- Installing: /usr/local/include/NumCpp/Coordinates/RA.hpp
-- Installing: /usr/local/include/NumCpp/Coordinates/Coordinate.hpp
-- Installing: /usr/local/include/NumCpp/Coordinates/radianSeperation.hpp
-- Installing: /usr/local/include/NumCpp/Rotations.hpp
-- Installing: /usr/local/include/NumCpp/Core
-- Installing: /usr/local/include/NumCpp/Core/Internal
-- Installing: /usr/local/include/NumCpp/Core/Internal/StdComplexOperators.hpp
-- Installing: /usr/local/include/NumCpp/Core/Internal/StlAlgorithms.hpp
-- Installing: /usr/local/include/NumCpp/Core/Internal/TypeTraits.hpp
-- Installing: /usr/local/include/NumCpp/Core/Internal/Endian.hpp
-- Installing: /usr/local/include/NumCpp/Core/Internal/StaticAsserts.hpp
-- Installing: /usr/local/include/NumCpp/Core/Internal/Filesystem.hpp
-- Installing: /usr/local/include/NumCpp/Core/Internal/Error.hpp
-- Installing: /usr/local/include/NumCpp/Core/Internal/Version.hpp
-- Installing: /usr/local/include/NumCpp/Core/Constants.hpp
-- Installing: /usr/local/include/NumCpp/Core/Slice.hpp
-- Installing: /usr/local/include/NumCpp/Core/Shape.hpp
-- Installing: /usr/local/include/NumCpp/Core/Timer.hpp
-- Installing: /usr/local/include/NumCpp/Core/DtypeInfo.hpp
-- Installing: /usr/local/include/NumCpp/Core/DataCube.hpp
-- Installing: /usr/local/include/NumCpp/Core/Types.hpp
-- Installing: /usr/local/include/NumCpp/Random.hpp
-- Installing: /usr/local/include/NumCpp/Linalg
-- Installing: /usr/local/include/NumCpp/Linalg/det.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/gaussNewtonNlls.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/hat.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/cholesky.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/pivotLU_decomposition.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/lstsq.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/multi_dot.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/svd
-- Installing: /usr/local/include/NumCpp/Linalg/svd/SVDClass.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/inv.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/svd.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/lu_decomposition.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/solve.hpp
-- Installing: /usr/local/include/NumCpp/Linalg/matrix_power.hpp

```

## Alternative

**NumCpp** is a header only library so you can of course simply add the **NumCpp** include directory (wherever it resides) to your build system's include directories and build that way.
