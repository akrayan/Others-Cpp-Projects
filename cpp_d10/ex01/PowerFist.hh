//
// AWeapon.hh for AWeapon.hh in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:39:33 2017 Rayan
// Last update Fri Jan 13 10:58:38 2017 Rayan
//

#ifndef POWERFIST_HH_
# define POWERFIST_HH_

#include "AWeapon.hh"
#include <iostream>


class	PowerFist : public AWeapon
{
public:
  PowerFist();
  virtual ~PowerFist();

  virtual void attack() const;
};

#endif
