//
// AWeapon.cpp for Aweapon.cpp in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:48:58 2017 Rayan
// Last update Fri Jan 13 06:29:31 2017 Rayan
//

#include "PowerFist.hh"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack() const
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
