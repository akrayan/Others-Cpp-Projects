//
// Priest.cpp for Priest.cpp in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 12:37:20 2017 Rayan
// Last update Fri Jan 13 09:32:18 2017 Rayan
//

#include "Priest.hh"

Priest::Priest(const std::string &name, int lvl) : Character(name, lvl), Mage(name, lvl)
{
  this->_strength = 4;
  this->_stamina = 4;
  this->_intelligent = 42;
  this->_spirit = 21;
  this->_agility = 2;
  std::cout << this->_name << " enters in the order" << std::endl;
}

Priest::~Priest()
{

}

int	Priest::CloseAttack()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      std::cout << this->_name << " uses a spirit explosion" << std::endl;
      return (10 + this->_spirit);
    }
  return (0);
}

int     Priest::RangeAttack()
{
  if (this->_power >= 25)
    {
      this->_power = this->_power - 25;
      std::cout << this->_name << " launches a fire ball" << std::endl;
      return (20 + this->_spirit);
    }
  return (0);
}

void    Priest::Heal()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      if (this->_pv + 70 <= 100)
	this->_pv = this->_pv + 70;
      else
	this->_pv = 100;
      std::cout << this->_name << " casts a little heal spell" << std::endl;
    }
}

void    Priest::RestorePower()
{
    if (this->_power + 50 + this->_intelligent <= 100)
    this->_pv = this->_pv + this->_power + 50 + this->_intelligent;
  else
    this->_power = 100;
  std::cout << this->_name << " takes a mana potion" << std::endl;
}
