//
// Character.cpp for Character.cpp in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 08:06:04 2017 Rayan
// Last update Fri Jan 13 11:00:16 2017 Rayan
//

#include "Character.hh"

Character::Character(std::string const & name) : _name(name), _ap(40), _w(NULL)
{
}

Character::~Character()
{
}

void	Character::equip(AWeapon *w)
{
  this->_w = w;
}

int	Character::getAP()
{
  return (this->_ap);
}

AWeapon		*Character::getWeapon()
{
  return (this->_w);
}

std::string const & Character::getName() const
{
  return (this->_name);
}

std::ostream & operator<<(std::ostream &os, Character & c)
{
  if (c.getWeapon() != NULL)
    os << c.getName() << " has " << c.getAP() << "AP and wields a " << c.getWeapon()->getName() << std::endl;
  else
    os << c.getName() << " has " << c.getAP() << "AP and is unarmed " << std::endl;
  return (os);
}

void	Character::attack(AEnemy *e)
{
  if (this->_w != NULL && this->_ap >= this->_w->getAPCost())
    {
      e->takeDamage(this->_w->getDamage());
      std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_w->getName() << std::endl;
      this->_ap -= this->_w->getAPCost();
      if (e->getHP() <= 0)
	{
	  delete e;
	  e = NULL;
	}
    }
}

void	Character::recoverAP()
{
  this->_ap += 10;
  if (this->_ap > 40)
    this->_ap = 40;
}
