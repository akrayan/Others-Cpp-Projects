//
// Ratatouille.cpp for Ratatouille.cpp in /home/rayan/Piscine_CPP/cpp_d16/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 20 09:26:15 2017 Rayan
// Last update Fri Jan 20 09:26:17 2017 Rayan
//

#include "Ratatouille.h"

Ratatouille::Ratatouille()
{
}

Ratatouille::Ratatouille(const Ratatouille &ra)
{
  _ratatouille.str("");
  _ratatouille << ra._ratatouille.str();
}

Ratatouille::~Ratatouille()
{
}

Ratatouille     &Ratatouille::operator=(const Ratatouille &ra)
{
  _ratatouille.str("");
  _ratatouille << ra._ratatouille.str();
  return (*this);
}

Ratatouille &Ratatouille::addVegetable(unsigned char a)
{
  _ratatouille << a;
  return (*this);
}

Ratatouille &Ratatouille::addCondiment(unsigned int a)
{
  _ratatouille << a;
  return (*this);
}

Ratatouille &Ratatouille::addSpice(double a)
{
  _ratatouille << a;
  return (*this);
}

Ratatouille &Ratatouille::addSauce(const std::string &str)
{
  _ratatouille << str;
  return (*this);
}

std::string Ratatouille::kooc(void)
{
  return std::string(_ratatouille.str());
}
