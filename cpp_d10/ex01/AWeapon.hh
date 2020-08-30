//
// AWeapon.hh for AWeapon.hh in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:39:33 2017 Rayan
// Last update Fri Jan 13 11:18:44 2017 Rayan
//

#ifndef AWEAPON_HH_
# define AWEAPON_HH_

#include <iostream>

class	AWeapon
{
  std::string	_name;
  int		_apcost;
  int		_damage;

public:
  AWeapon(std::string const &name, int apcost, int damage);
  virtual ~AWeapon();

  int getAPCost() const;
  int getDamage() const;
  std::string const &getName() const;
  virtual void attack() const = 0;
};

#endif
