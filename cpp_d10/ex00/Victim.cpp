//
// Sorcerer.cpp for Sorcerer.cpp in /home/rayan/Piscine_CPP/cpp_d10/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 03:44:43 2017 Rayan
// Last update Fri Jan 13 05:12:32 2017 Rayan
//

#include <iostream>
#include "Victim.hh"

Victim::Victim(std::string name)
{
  this->_name = name;
  std::cout << "Some random victim called " <<name << " just popped !" << std::endl;
}

Victim::~Victim()
{
  std::cout << "Victim "<< this->_name <<  " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName()
{
  return (this->_name);
}

std::ostream & operator<<(std::ostream & os, Victim & v)
{
  std::cout << "I'm " << v.getName() << " and i like otters !" << std::endl;
  return (os);
}

void	Victim::getPolymorphed() const
{
  std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}
