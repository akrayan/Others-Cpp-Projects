//
// Mage.cpp for Mage.cpp in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 11:17:46 2017 Rayan
// Last update Fri Jan 13 09:29:55 2017 Rayan
//

#include "Mage.hh"

Mage::Mage(const std::string &name, int lvl) : Character(name, lvl)
{
  this->_strength = 6;
  this->_stamina = 6;
  this->_intelligent = 12;
  this->_spirit = 11;
  this->_agility = 7;
  this->Range = CLOSE;
  std::cout << this->_name << " teleported" << std::endl;
}

Mage::~Mage()
{

}

int	Mage::CloseAttack()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      std::cout << this->_name << " blinks" << std::endl;
      this->Range = RANGE;
    }
  return (0);
}

int     Mage::RangeAttack()
{
  if (this->_power >= 25)
    {
      this->_power = this->_power - 25;
      std::cout << this->_name << " launches a fire ball" << std::endl;
      return (20 + this->_spirit);
    }
  return (0);
}

void    Mage::Heal()
{
  if (this->_pv + 50 <= 100)
    this->_pv = this->_pv + 50;
  else
    this->_pv = 100;
  std::cout << this->_name << " takes a potion" << std::endl;
}

void    Mage::RestorePower()
{
    if (this->_power + 50 + this->_intelligent <= 100)
    this->_pv = this->_pv + this->_power + 50 + this->_intelligent;
  else
    this->_power = 100;
  std::cout << this->_name << " takes a mana potion" << std::endl;
}
