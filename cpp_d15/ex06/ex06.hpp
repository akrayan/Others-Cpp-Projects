//
// ex06.hpp for ex06.hpp in /home/rayan/Piscine_CPP/cpp_d15/ex06
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Thu Jan 19 09:33:38 2017 Rayan
// Last update Thu Jan 19 09:33:39 2017 Rayan
//


#ifndef EX06_HPP_
# define EX06_HPP_

# include <iostream>
# include <sstream>
# include <string>

template<typename T>
std::string var(T)
{
  return ("???");
}

template<>
std::string var(int a)
{
  std::ostringstream os;
  os << a;
  return ("int:" + os.str());
}

template<>
std::string var(float a)
{
  std::ostringstream os;
  os << a;
  return ("float:" + os.str() + "f");
}

template<>
std::string var(std::string a)
{
  return ("string:\"" + a + "\"");
}

template<typename T1, typename T2 = T1>
class Tuple
{
public:
  T1 a;
  T2 b;
  std::string toString()
  {
    return ("[TUPLE [" + var(a) + "] [" + var(b) + "]]");
  }
};
#endif /* !EX06_HPP_ */
