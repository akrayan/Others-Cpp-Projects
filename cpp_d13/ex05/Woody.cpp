//
// Woody.cpp for Woody.cpp in /home/rayan/Piscine_CPP/cpp_d13/ex05
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 09:29:04 2017 Rayan
// Last update Tue Jan 17 09:29:05 2017 Rayan
//


#include "Woody.h"


Woody::Woody(std::string const &name, std::string const &file) : Toy(WOODY, name, file)
{

}

Woody::~Woody()
{

}

void	Woody::speak(const std::string &statement)
{
  std::cout << "BUZZ: " << this->_name << " \"" << statement << "\"" << std::endl;
}
