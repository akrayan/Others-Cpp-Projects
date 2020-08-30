//
// ex03.hpp for ex03.hpp in /home/rayan/Piscine_CPP/cpp_d15/ex03
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 20:26:33 2017 Rayan
// Last update Wed Jan 18 20:26:34 2017 Rayan
//


#ifndef EX03_HPP_
# define EX03_HPP_

#include <iostream>

template <typename X>
void print(X const &a)
{
  std::cout << a << std::endl;
}

template <typename T>
void foreach(T const *tab, void (&funch)(const T& elem), int const &len)
{
  int i = 0;

  while (i < len)
    {
      funch(tab[i]);
      i = i + 1;
    }
}

#endif /* !EX03_HPP_ */
