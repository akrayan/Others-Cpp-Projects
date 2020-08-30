//
// Fruit.cpp for Fruit.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 09:34:41 2017 Rayan
// Last update Tue Jan 17 21:58:47 2017 Rayan
//

#include "Fruit.h"

Fruit::Fruit(std::string name, int v) : name(name), _vitamins(v)
{
}

Fruit::~Fruit()
{
}

std::string	Fruit::getName() const
{
  return (this->name);
}

int		Fruit::getVitamins() const
{
  return (this->_vitamins);
}
