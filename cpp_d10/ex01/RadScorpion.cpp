//
// RadScorpion.cpp for Aweapon.cpp in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:48:58 2017 Rayan
// Last update Fri Jan 13 07:29:29 2017 Rayan
//

#include "RadScorpion.hh"

RadScorpion::RadScorpion() : AEnemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
  std::cout << "* SPROTCH *" << std::endl;
}
