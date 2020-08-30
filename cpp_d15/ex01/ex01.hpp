//
// ex01.hpp for ex01.hpp in /home/rayan/Piscine_CPP/cpp_d15/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Thu Jan 19 09:36:16 2017 Rayan
// Last update Thu Jan 19 09:36:18 2017 Rayan
//

#ifndef EX01_HPP_
# define EX01_HPP_

template<typename Type>
int compare(Type const &a, Type const &b)
{
  if (a < b)
    return (-1);
  else if (a > b)
    return (1);
  else
    return (0);
}

#endif /* !EX01_HPP_ */
