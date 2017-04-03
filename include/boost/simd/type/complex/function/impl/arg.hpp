//==================================================================================================
/**
  Copyright 2017 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#ifndef BOOST_SIMD_TYPE_COMPLEX_FUNCTION_IMPL_ARG_HPP_INCLUDED
#define BOOST_SIMD_TYPE_COMPLEX_FUNCTION_IMPL_ARG_HPP_INCLUDED

#include <boost/simd/detail/dispatch/function/overload.hpp>
#include <boost/simd/type/complex/detail/hierarchy.hpp>
#include <boost/simd/function/atan2.hpp>
#include <boost/simd/function/pedantic.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bs = boost::simd;

  BOOST_DISPATCH_OVERLOAD ( arg_
                          , (typename A0)
                          , bd::cpu_
                          , bs::cmplx::complex_<A0>
                          )
  {
    BOOST_FORCEINLINE auto operator()(A0 const& a0) const BOOST_NOEXCEPT_DECLTYPE_BODY
    (
      bs::atan2(a0.imag, a0.real)
    )
  };

  BOOST_DISPATCH_OVERLOAD ( arg_
                          , (typename A0)
                          , bd::cpu_
                          , bs::pedantic_tag
                          , bs::cmplx::complex_<A0>
                          )
  {
    BOOST_FORCEINLINE auto operator()(bs::pedantic_tag const &
                                     , A0 const& a0) const BOOST_NOEXCEPT_DECLTYPE_BODY
    (
       bs::pedantic_(bs::atan2)(a0.imag, a0.real)
    )
  };
} } }

#endif