//
// Sorcerer.hh for Sorcerer.hh in /home/rayan/Piscine_CPP/cpp_d10/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 03:45:54 2017 Rayan
// Last update Fri Jan 13 05:30:01 2017 Rayan
//

#ifndef VICTIM_HH_
# define VICTIM_HH_

#include <iostream>

class		Victim
{
protected:
  std::string _name;

public:
  Victim(std::string name);
  ~Victim();

  std::string getName();
  virtual void    getPolymorphed() const;

};

  std::ostream & operator<<(std::ostream & os, Victim & v);


#endif
