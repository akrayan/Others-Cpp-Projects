//
// Sorcerer.cpp for Sorcerer.cpp in /home/rayan/Piscine_CPP/cpp_d10/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 03:44:43 2017 Rayan
// Last update Fri Jan 13 05:09:57 2017 Rayan
//

#include <iostream>
#include "Sorcerer.hh"

Sorcerer::Sorcerer(std::string name, std::string title)
{
  this->_name = name;
  this->_title = title;
  std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName()
{
  return (this->_name);
}

std::string Sorcerer::getTitle()
{
  return (this->_title);
}

std::ostream& operator<<(std::ostream& os, Sorcerer  & s)
{
  os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies !" << std::endl;
  return (os);
}

void  Sorcerer::polymorph(Victim & v) const
{
  v.getPolymorphed();
}
