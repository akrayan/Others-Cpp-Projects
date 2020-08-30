//
// Character.cpp for Character.cpp in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 09:12:34 2017 Rayan
// Last update Fri Jan 13 09:24:59 2017 Rayan
//

#include "Character.hh"

Character::Character(const std::string &name, int lvl) : _name(name),   _lvl(lvl)
{
  this->_pv = 100;
  this->_power = 100;
  this->_strength = 5;
  this->_stamina = 5;
  this->_intelligent = 5;
  this->_spirit = 5;
  this->_agility = 5;
  this->Range = CLOSE;
  std::cout << this->_name << " Created" << std::endl;
}

Character::~Character()
{

}

const std::string &Character::getName() const
{
  return (this->_name);
}

int	Character::getLvl() const
{
  return (this->_lvl);
}

int	Character::getPv() const
{
  return (this->_pv);
}
int	Character::getPower() const
{
  return (this->_power);
}

int	Character::CloseAttack()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      std::cout << this->_name << " strikes with a wood stick" << std::endl;
      return (this->_strength + 10);
    }
  return (0);
}

int	Character::RangeAttack()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      std::cout << this->_name << " launches a stone" << std::endl;
      return (this->_strength + 5);
    }
  return (0);
}

void	Character::Heal()
{
  if (this->_pv + 50 <= 100)
    this->_pv = this->_pv + 50;
  else
    this->_pv = 100;
  std::cout << this->_name << " takes a potion" << std::endl;
}

void	Character::RestorePower()
{
  this->_power = 100;
  std::cout << this->_name << " eats" << std::endl;
}

void	Character::TakeDamage(int _damage)
{
  this->_pv = this->_pv - _damage;
  if (this->_pv <= 0)
    std::cout << this->_name << " out of combat" << std::endl;
  else
    std::cout << this->_name << " takes " << _damage << " damage" << std::endl;
}
