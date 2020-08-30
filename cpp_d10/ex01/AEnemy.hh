//
// Aenemy.hh for Aenemy.hh in /home/rayan/Piscine_CPP/cpp_d10/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 05:39:33 2017 Rayan
// Last update Fri Jan 13 11:20:49 2017 Rayan
//

#ifndef AENEMY_HH_
# define AENEMY_HH_

#include <iostream>

class	AEnemy
{
  int		_hp;
  std::string	_type;

public:
  AEnemy(int hp, std::string const &type);
  virtual ~AEnemy();

  int getHP() const;
  std::string const &getType() const;
  virtual void takeDamage(int);
};

#endif
