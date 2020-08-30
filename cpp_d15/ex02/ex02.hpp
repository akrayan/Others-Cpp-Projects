//
// ex02.hpp for ex02.hpp in /home/rayan/Piscine_CPP/cpp_d15/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 20:26:07 2017 Rayan
// Last update Wed Jan 18 20:26:08 2017 Rayan
//

#ifndef EX02_HPP_
# define EX02_HPP_

# include <iostream>

template <typename Type>
Type const &min(Type const &a, Type const &b)
{
  std::cout << "template min" << std::endl;
  if (a < b)
    return (a);
  return (b);
}

int const &min(int const &a, int const &b)
{
  std::cout << "non-template min" << std::endl;
  if (a < b)
    return (a);
  return (b);
}

template <typename Type>
Type templateMin(Type const *tab, int const size)
{
  int i;
  Type ret;

  i = 1;
  ret = tab[0];
  while (i < size)
    {
      ret = min<Type>(tab[i], ret);
      i = i + 1;
    }
  return (ret);
}

int nonTemplateMin(int const *tab, int const size)
{
  int i;
  int ret;

  i = 1;
  ret = tab[0];
  while (i < size)
    {
      ret = min(tab[i], ret);
      i = i + 1;
    }
  return (ret);
}

#endif /* !EX02_HPP_ */
