/*
** Woody.h for Woody.h in /home/rayan/Piscine_CPP/cpp_d13/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 00:26:03 2017 Rayan
** Last update Tue Jan 17 00:39:20 2017 Rayan
*/

#ifndef WOODY_H_
# define WOODY_H_

#include "Toy.h"

class	Woody : public Toy
{
 public:
  Woody(std::string name, std::string fn = "woody.txt");
  ~Woody();
};

#endif
