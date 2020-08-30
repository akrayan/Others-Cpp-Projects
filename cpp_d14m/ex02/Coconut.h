/*
** Coconut.h for Coconut.h in /home/rayan/Piscine_CPP/cpp_d14m/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan 18 09:02:40 2017 Rayan
** Last update Wed Jan 18 09:02:43 2017 Rayan
*/

#ifndef COCONUT_H_
# define COCONUT_H_

#include <iostream>
#include <string>
#include "Fruit.h"

class Coconut: public Fruit
{
 public:
  Coconut();
  ~Coconut();
  int           getVitamins() const;
  std::string   getName() const;
};

#endif /* COCONUT_H_ */
