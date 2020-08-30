//
// Warrior.cpp for Warrior.cpp in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 10:45:12 2017 Rayan
// Last update Fri Jan 13 09:28:43 2017 Rayan
//

#include "Warrior.hh"

Warrior::Warrior(const std::string &name, int lvl) : Character(name, lvl)
{
  this->_strength = 12;
  this->_stamina = 12;
  this->_intelligent = 6;
  this->_spirit = 5;
  this->_agility = 7;
  this->weaponName = "hammer";
  std::cout << "I'm " << this->_name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{

}

int	Warrior::CloseAttack()
{
  if (this->_power >= 30)
    {
      this->_power = this->_power - 30;
      std::cout << this->_name << " strikes with his " << this->weaponName << std::endl;
      return (this->_strength + 20);
    }
  return (0);
}

int	Warrior::RangeAttack()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      std::cout << this->_name << " intercepts" << std::endl;
      this->Range = CLOSE;
    }
  return (0);
}

void    Warrior::Heal()
{
  if (this->_pv + 50 <= 100)
    this->_pv = this->_pv + 50;
  else
    this->_pv = 100;
  std::cout << this->_name << " takes a potion" << std::endl;
}

void	Warrior::RestorePower()
{
  this->_power = 100;
  std::cout << this->_name << " eats" << std::endl;
}
