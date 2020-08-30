//
// Lime.cpp for Lime.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:06:58 2017 Rayan
// Last update Wed Jan 18 09:06:59 2017 Rayan
//

#include "Lime.h"

Lime::Lime() : Lemon()
{
  _vitamins = 2;
  _name = "lime";
}

Lime::~Lime()
{
}

int             Lime::getVitamins() const
{
  return _vitamins;
}

std::string     Lime::getName() const
{
  return _name;
}
