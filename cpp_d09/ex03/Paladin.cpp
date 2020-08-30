//
// Paladin.cpp for Paladin.cpp in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 14:57:15 2017 Rayan
// Last update Fri Jan 13 09:36:17 2017 Rayan
//

#include "Paladin.hh"

Paladin::Paladin(const std::string &name, int lvl) : Character(name, lvl), Warrior(name, lvl), Mage(name, lvl), Priest(name, lvl)
{
  this->_strength = 9;
  this->_stamina = 10;
  this->_intelligent = 10;
  this->_spirit = 10;
  this->_agility = 2;
  this->weaponName = "hammer";
  this->Range = CLOSE;
  std::cout << "the light falls on " << this->_name << std::endl;
}

Paladin::~Paladin()
{

}

int	Paladin::CloseAttack()
{
  return Warrior::CloseAttack();
}

int	Paladin::RangeAttack()
{
  return Priest::RangeAttack();
}

void    Paladin::Heal()
{
  Priest::Heal();
}

void    Paladin::RestorePower()
{
  Warrior::RangeAttack();
}

int	Paladin::Intercept()
{
  return Warrior::RangeAttack();
}
