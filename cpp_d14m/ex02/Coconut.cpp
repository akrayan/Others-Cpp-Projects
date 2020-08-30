//
// Coconut.cpp for Coconut.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:02:54 2017 Rayan
// Last update Wed Jan 18 09:02:55 2017 Rayan
//

#include "Coconut.h"

Coconut::Coconut() : Fruit()
{
  _vitamins = 15;
  _name = "coconut";
}

Coconut::~Coconut()
{
}

std::string     Coconut::getName() const
{
  return _name;
}

int     Coconut::getVitamins() const
{
  return _vitamins;
}
