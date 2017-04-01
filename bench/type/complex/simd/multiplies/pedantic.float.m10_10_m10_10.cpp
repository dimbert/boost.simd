// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor multiplies in simd mode for bs::complex<float> type with with pedantic_ decorator
#include <simd_bench.hpp>
#include <boost/simd/type/complex/function/multiplies.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_BENCH_MAIN()
{
  using T = bs::complex<bs::pack<float>>;
  run<T>(bs::pedantic_(bs::multiplies), nsbg::rand<T>(-10, 10), nsbg::rand<T>(-10, 10));
}
