//
// find.hpp for find.hpp in /home/rayan/Piscine_CPP/cpp_d17/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 20 13:13:41 2017 Rayan
// Last update Fri Jan 20 13:57:44 2017 Rayan
//

#ifndef FIND_HPP_
# define FIND_HPP_

# include <algorithm>

template<typename T>
typename T::iterator	do_find(T &t, int i)
{
  return(find(t.begin(), t.end(), i));
}

#endif /* FIND_HPP_ */
