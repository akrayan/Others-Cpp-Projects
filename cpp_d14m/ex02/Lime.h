/*
** Lime.h for Lime.h in /home/rayan/Piscine_CPP/cpp_d14m/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan 18 09:07:06 2017 Rayan
** Last update Wed Jan 18 09:07:07 2017 Rayan
*/

#ifndef LIME_H_
# define LIME_H_

#include <iostream>
#include <string>
#include "Lemon.h"

class Lime : public Lemon
{
 public:
  Lime();
  ~Lime();
  int           getVitamins() const;
  std::string   getName() const;
};

#endif /* LIME_H_ */
