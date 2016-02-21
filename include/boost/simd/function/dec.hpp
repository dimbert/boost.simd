//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_DEC_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_DEC_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-arithmetic

  Decrements a value by 1.

  @par semantic:
  For any given value @c x of type @c T:

  @code
  T r = dec(x);
  @endcode

  is equivalent to:

  @code
  T r =  x-T(1);
  @endcode

  @see  minusone, minus

  @return      a value of the same type as the input.


**/
  template<typename T> auto dec(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-callable-arithmetic

    Decrements a value by 1.


      Function object tied to simd::abs

      @see simd::abs
    **/
    const boost::dispatch::functor<tag::dec_> dec = {};
  }
} }
#endif

#include <boost/simd/function/scalar/dec.hpp>
#include <boost/simd/function/simd/dec.hpp>

#endif