//
// AWeapon.cpp for Aweapon.cpp in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:48:58 2017 Rayan
// Last update Fri Jan 13 10:12:53 2017 Rayan
//

#include "AWeapon.hh"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

int	AWeapon::getAPCost() const
{
  return (this->_apcost);
}

int	AWeapon::getDamage() const
{
  return (this->_damage);
}

std::string const &AWeapon::getName() const
{
  return (this->_name);
}
