//==================================================================================================
/*!
  @file

  Defines a polymorphic identity functions

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

**/
//==================================================================================================
#ifndef BOOST_SIMD_DETAIL_IDENTITY_HPP_INCLUDED
#define BOOST_SIMD_DETAIL_IDENTITY_HPP_INCLUDED

namespace boost { namespace simd
{
  namespace detail {
    struct identity
    {
      template < typename U>
      BOOST_FORCEINLINE U operator()(const U & u) const BOOST_NOEXCEPT
      {
        return u;
      }
    };
  }
} }

#endif
