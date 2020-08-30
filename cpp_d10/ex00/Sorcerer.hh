//
// Sorcerer.hh for Sorcerer.hh in /home/rayan/Piscine_CPP/cpp_d10/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 03:45:54 2017 Rayan
// Last update Fri Jan 13 05:14:49 2017 Rayan
//

#ifndef SORCERER_HH_
# define SORCERER_HH_

#include "Victim.hh"
#include <iostream>


class		Sorcerer
{
  std::string _name;
  std::string _title;

public:
  Sorcerer(std::string name, std::string title);
  ~Sorcerer();

  std::string getTitle();
  std::string getName();

   void	polymorph(Victim & v) const;
};

std::ostream& operator<<(std::ostream& os, Sorcerer & s);

#endif
