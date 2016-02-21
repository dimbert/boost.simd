//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_NLE_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_NLE_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-predicates

    Returns @ref True  or @ref False depending on whether x is
    not less or equal to y or is.

    This is a convenient alias of @ref is_not_less_equal
**/
  template<typename T> auto is_nle(T const& x, T const& y) {}

  namespace functional
  {
    /*!
      @ingroup group-callable-predicates

      @par Semantic:


      Function object tied to simd::is_nle

      @see simd::is_nle
    **/
    const boost::dispatch::functor<tag::is_nle_> is_nle = {};
  }
} }
#endif

#include <boost/simd/function/scalar/is_not_less_equal.hpp>
#include <boost/simd/function/simd/is_nle.hpp>

#endif