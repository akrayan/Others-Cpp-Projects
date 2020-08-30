//
// Fruit.cpp for Fruit.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:04:01 2017 Rayan
// Last update Wed Jan 18 09:04:02 2017 Rayan
//
#include "Fruit.h"

Fruit::Fruit() {}

Fruit::~Fruit() {}

int             Fruit::getVitamins() const
{
  return _vitamins;
}

std::string     Fruit::getName() const
{
  return _name;
}
