//
// Hunter.cpp for Hunter.cpp in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 16:14:30 2017 Rayan
// Last update Fri Jan 13 09:37:21 2017 Rayan
//

#include "Hunter.hh"


Hunter::Hunter(const std::string &name, int lvl) : Character(name, lvl), Warrior(name, lvl)
{
  this->_strength = 9;
  this->_stamina = 9;
  this->_intelligent = 5;
  this->_spirit = 6;
  this->_agility = 24;
  this->weaponName = "sword";
  std::cout << this->getName() << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{

}

int	Hunter::CloseAttack()
{
  if (this->_power >= 30)
    {
      this->_power -= 30;
      std::cout << this->getName() << " strikes with his " <<   this->weaponName << std::endl;
      return (20 + this->_strength);
    }
  std::cout << this->getName() << " out of power" << std::endl;
  return (0);
}

int	Hunter::RangeAttack()
{
  if (this->_power >= 25)
    {
      this->_power -= 25;
      std::cout << this->getName() << " uses his bow" << std::endl;
      return (20 + this->_agility);
    }
  std::cout << this->getName() << " out of power" << std::endl;
  return (0);
}

void	Hunter::RestorePower()
{
  this->_power = 100;
  std::cout << this->getName() << " meditates" << std::endl;
}
