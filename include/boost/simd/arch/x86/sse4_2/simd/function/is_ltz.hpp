//==================================================================================================
/*!
    @file

    @Copyright 2016 Numscale SAS
    @copyright 2016 J.T.Lapreste

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_X86_SSE4_2_SIMD_FUNCTION_IS_LTZ_HPP_INCLUDED
#define BOOST_SIMD_ARCH_X86_SSE4_2_SIMD_FUNCTION_IS_LTZ_HPP_INCLUDED

#include <boost/simd/sdk/hierarchy/simd.hpp>
#include <boost/simd/function/simd/is_greater.hpp>
#include <boost/simd/constant/zero.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd =  boost::dispatch;
  namespace bs =  boost::simd;
  BOOST_DISPATCH_OVERLOAD ( is_ltz_
                          , (typename A0)
                          , bs::sse4_2_
                          , bs::pack_<bd::int64_<A0>, bs::sse_>
                         )
  {

    BOOST_FORCEINLINE  as_logical_t<A0> operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      return is_greater(Zero<A0>(), a0);
    }
  };

} } }

#endif
