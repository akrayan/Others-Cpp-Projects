//
// Sorcerer.cpp for Sorcerer.cpp in /home/rayan/Piscine_CPP/cpp_d10/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 03:44:43 2017 Rayan
// Last update Fri Jan 13 05:31:12 2017 Rayan
//

#include "Peon.hh"

Peon::Peon(std::string name) : Victim(name)
{
   std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
  std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
  std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
