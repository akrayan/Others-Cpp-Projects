//
// ex00.hpp for ex00.hpp in /home/rayan/Piscine_CPP/cpp_d15/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 14:33:26 2017 Rayan
// Last update Wed Jan 18 15:31:45 2017 Rayan
//

#ifndef EX00_HPP_
# define EX00_HPP_

template<typename T>
void	swap(T & a, T  & b)
{
  T c;
  c = a;
  a = b;
  b = c;
}

template<typename T>
T	min(T a, T b)
{
  if (a < b)
    return (a);
  else
    return (b);
}

template<typename T>
T	max(T a, T b)
{
  if (a > b)
    return (a);
  else
    return (b);
}

template<typename T>
T	add(T & a, T  & b)
{
  T c;
  c = a + b;
  return (c);
}

#endif /* EX00_HPP_ */
