//
// Banana.cpp for Banana.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:02:17 2017 Rayan
// Last update Wed Jan 18 09:02:19 2017 Rayan
//

#include "Banana.h"

Banana::Banana()
{
    _vitamins = 5;
    _name = "banana";
}

Banana::~Banana() {}

int     Banana::getVitamins() const
{
  return _vitamins;
}

std::string     Banana::getName() const
{
  return _name;
}
