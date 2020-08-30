//
// Character.hh for Character.hh in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 08:07:09 2017 Rayan
// Last update Fri Jan 13 10:48:54 2017 Rayan
//

#ifndef CHARACTER_HH_
# define CHARACTER_HH_

#include <iostream>
#include "AWeapon.hh"
#include "AEnemy.hh"

class	Character
{
  std::string _name;
  int	_ap;
  AWeapon *_w;

public:
  Character(std::string const & name);
  ~Character();
  void recoverAP();
  void equip(AWeapon *w);
  void attack(AEnemy *e);
  AWeapon *getWeapon();
  int	getAP();
  std::string const & getName() const;
};

std::ostream & operator<<(std::ostream &os, Character & c);

#endif
