//
// Sorcerer.hh for Sorcerer.hh in /home/rayan/Piscine_CPP/cpp_d10/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 03:45:54 2017 Rayan
// Last update Fri Jan 13 05:28:49 2017 Rayan
//

#ifndef PEON_HH_
# define PEON_HH_

#include <iostream>
#include "Victim.hh"

class		Peon : public Victim
{
public:
  Peon(std::string name);
  virtual ~Peon();

  virtual void    getPolymorphed() const;
};


#endif
