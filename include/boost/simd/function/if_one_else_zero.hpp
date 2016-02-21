//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IF_ONE_ELSE_ZERO_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IF_ONE_ELSE_ZERO_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-boolean

    If cond is @ref True returns @ref One else returns @ref Zero

    @par Semantic:

    For every parameter @c cond of type C:

    @code
    auto r = if_one_else_zero(cond);
    @endcode

    is similar to:

    @code
    auto r = cond ? One : Zero;
    @endcode

    @par Note:

    The return type is generally C except in the case where C is as_logical_t<T>. in which case
    the return type is T.


    @return a value of the type associated to the logical value cond

**/
  template<typename T> auto if_one_else_zero(C const& cond) {}

  namespace functional
  {
    /*!
      @ingroup group-callable-boolean

      If cond is @ref True returns @ref Zero one returns zero


      Function object tied to simd::if_one_else_zero

      @see simd::if_one_else_zero
    **/
    const boost::dispatch::functor<tag::if_one_else_zero_> if_one_else_zero = {};
  }
} }
#endif

#include <boost/simd/function/scalar/if_one_else_zero.hpp>
#include <boost/simd/function/simd/if_one_else_zero.hpp>

#endif