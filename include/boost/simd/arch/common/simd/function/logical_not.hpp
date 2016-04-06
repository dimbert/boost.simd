//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS
  @copyright 2016 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SIMD_FUNCTION_LOGICAL_NOT_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SIMD_FUNCTION_LOGICAL_NOT_HPP_INCLUDED
#include <boost/simd/sdk/hierarchy/simd.hpp>
#include <boost/simd/function/simd/is_eqz.hpp>
#include <boost/simd/function/simd/complement.hpp>
#include <boost/simd/function/simd/mask2logical.hpp>
#include <boost/simd/sdk/as_logical.hpp>

namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;
   BOOST_DISPATCH_OVERLOAD(logical_not_
                          , (typename A0,typename X)
                          , bd::cpu_
                          , bs::pack_<bd::arithmetic_<A0>,X>
                          )

  {
    BOOST_FORCEINLINE bs::as_logical_t<A0> operator()( const A0& a0) const BOOST_NOEXCEPT
    {
      return is_eqz(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD(logical_not_
                          , (typename A0,typename X)
                          , bd::cpu_
                          , bs::pack_<bs::logical_<A0>,X>
                          )

  {
    BOOST_FORCEINLINE bs::as_logical_t<A0>  operator()( const A0& a0) const BOOST_NOEXCEPT
    {
      return mask2logical(complement(genmask(a0)));
    }
  };

} } }


#endif

