//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_UNARY_PLUS_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_UNARY_PLUS_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-arithmetic

    return the elementwise unary plus of the parameter

    Infix notation can be used with operator '+'

    @par Semantic:

    For every parameter of type T

    @code
    T r = unary_plus(x);
    @endcode

    is similar to:

    @code
    T r = +x;
    @endcode

    @see  plus, unary_minus

    @return a value of the same type as the parameter

**/
  template<typename T> auto unary_plus(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-callable-arithmetic

      return the elementwise unary plus of the parameter


      Function object tied to simd::unary_plus

      @see simd::unary_plus
    **/
    const boost::dispatch::functor<tag::unary_plus_> unary_plus = {};
  }
} }
#endif

#include <boost/simd/function/scalar/unary_plus.hpp>
#include <boost/simd/function/simd/unary_plus.hpp>

#endif