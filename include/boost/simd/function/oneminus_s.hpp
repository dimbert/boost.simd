//==================================================================================================
/*!
  @file

  @copyright 2012-2016 NumScale SAS
  @copyright 2016 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_ONEMINUS_S_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_ONEMINUS_S_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-arithmetic

    Returns the one minus the entry, saturated in the entry type.

    @par semantic:
    For any given value @c x of type @c T:

    @code
    T r = oneminus_s(x);
    @endcode

    For signed type is similar to:

    @code
    T r = 1-x
    @endcode

    For unsigned type it is equivalent (due to saturation) to:

    @code
    T r = x == 0 ? 1 : 0
    @endcode


    @return      a value of the same type as the input.


**/
  template<typename T> auto oneminus_s(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-callable-arithmetic

      Returns the one minus the entry, saturated in the entry type.


      Function object tied to simd::oneminus_s

      @see simd::oneminus_s
    **/
    const boost::dispatch::functor<tag::oneminus_s_> oneminus_s = {};
  }
} }
#endif

#include <boost/simd/function/scalar/oneminus_s.hpp>
#include <boost/simd/function/simd/oneminus_s.hpp>

#endif
