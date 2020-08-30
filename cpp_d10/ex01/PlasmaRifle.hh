//
// AWeapon.hh for AWeapon.hh in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:39:33 2017 Rayan
// Last update Fri Jan 13 10:57:51 2017 Rayan
//

#ifndef PLASMARIFLE_HH_
# define PLASMARIFLE_HH_

#include "AWeapon.hh"
#include <iostream>


class	PlasmaRifle : public AWeapon
{
public:
  PlasmaRifle();
  virtual ~PlasmaRifle();

  virtual void attack() const;
};

#endif
