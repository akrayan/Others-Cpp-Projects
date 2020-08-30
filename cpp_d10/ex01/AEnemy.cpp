//
// AEnemy.cpp for Aweapon.cpp in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:48:58 2017 Rayan
// Last update Fri Jan 13 10:09:58 2017 Rayan
//

#include "AEnemy.hh"

AEnemy::AEnemy(int hp, std::string const & type):_hp(hp), _type(type)
{
}

AEnemy::~AEnemy()
{
}

int	AEnemy::getHP() const
{
  return (this->_hp);
}

std::string const &AEnemy::getType() const
{
  return (this->_type);
}

void	AEnemy::takeDamage(int d)
{
  if (d > 0)
    this->_hp -= d;
}
