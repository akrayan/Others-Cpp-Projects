//
// Buzz.cpp for Buzz.cpp in /home/rayan/Piscine_CPP/cpp_d13/ex05
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 09:27:18 2017 Rayan
// Last update Tue Jan 17 09:27:19 2017 Rayan
//


#include "Buzz.h"

Buzz::Buzz(std::string const &name, std::string const &file) : Toy(BUZZ, name, file)
{

}

Buzz::~Buzz()
{

}

void	Buzz::speak(const std::string &statement)
{
  std::cout << "BUZZ: " << this->_name << " \"" << statement << "\"" << std::endl;
}
