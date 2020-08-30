//
// Aenemy.hh for Aenemy.hh in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:39:33 2017 Rayan
// Last update Fri Jan 13 10:57:39 2017 Rayan
//

#ifndef SUPERMUTANT_HH_
# define SUPERMUTANT_HH_

#include "AEnemy.hh"
#include <iostream>

class	SuperMutant : public AEnemy
{
public:
  SuperMutant();
  virtual ~SuperMutant();

  virtual void takeDamage(int);
};

#endif
