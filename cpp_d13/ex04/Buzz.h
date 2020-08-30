/*
** Buzz.h for Buzz.h in /home/rayan/Piscine_CPP/cpp_d13/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 00:26:03 2017 Rayan
** Last update Tue Jan 17 00:49:48 2017 Rayan
*/

#ifndef BUZZ_H_
# define BUZZ_H_

#include "Toy.h"

class	Buzz : public Toy
{
 public:
  Buzz(std::string name, std::string fn = "buzz.txt");
  ~Buzz();

  virtual void	speak(std::string str);
};

#endif
