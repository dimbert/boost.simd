//==================================================================================================
/*
  Copyright 2017 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
//! [transform_reduce2]
#include <boost/simd/algorithm/transform_reduce.hpp>
#include <boost/simd/function/sqr.hpp>
#include <iostream>
#include <vector>

int main()
{
  namespace bs =  boost::simd;
  std::vector<float> d{1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f} ;
  std::vector<float> e{1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f} ;

  auto s1 = bs::transform_reduce( d.data(), d.data()+10, e.data(), bs::multiplies, 0.0f, bs::plus);
  std::cout << "s1 = " << s1 << std::endl;
  auto s2 = bs::transform_reduce( d.data()+1, d.data()+10, e.data()+1, bs::multiplies, 1.0f, bs::plus);
  std::cout << "s2 = " << s2 << std::endl;
  auto s3 = bs::transform_reduce( d.data()+1, d.data()+10, e.data(), bs::multiplies, 0.0f, bs::plus);
  std::cout << "s3 = " << s3 << std::endl;
  auto s4 = bs::transform_reduce( d.data(), d.data()+10, e.data(), bs::multiplies, 1.0f, bs::multiplies);
  std::cout << "s4 = " << s4 << std::endl;
  return 0;
}
//! [transform_reduce2]
