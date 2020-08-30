//
// Lemon.cpp for Lemon.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:06:34 2017 Rayan
// Last update Wed Jan 18 09:06:36 2017 Rayan
//

#include "Lemon.h"

Lemon::Lemon()
{
    _vitamins = 3;
    _name = "lemon";
}

Lemon::~Lemon() {}

int     Lemon::getVitamins() const
{
  return _vitamins;
}

std::string     Lemon::getName() const
{
  return _name;
}
