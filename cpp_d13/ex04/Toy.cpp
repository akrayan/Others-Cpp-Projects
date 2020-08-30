//
// Toy.cpp for Toy.cpp in /home/rayan/Piscine_CPP/cpp_d13/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Mon Jan 16 16:32:53 2017 Rayan
// Last update Tue Jan 17 01:21:26 2017 Rayan
//

#include "Toy.h"

Toy::Toy() : type(BASIC_TOY)
{
}

Toy::Toy(ToyType t, std::string n, std::string fn) : type(t), name(n)
{
  this->pic.getPictureFromFile(fn);
}


Toy::~Toy()
{
}

Toy::ToyType	Toy::getType()
{
  return (this->type);
}

std::string	Toy::getName()
{
 return (this->name);
}

std::string	Toy::getAscii()
{
 return (this->pic.data);
}

void		Toy::setName(std::string name)
{
  this->name = name;
}

void		Toy::speak(std::string str)
{
  std::cout << this->name << " " << str << std::endl;
}

void		Toy::operator<<(std::string str)
{
  this->pic.data = str;
}

std::ostream&	operator<<(std::ostream& os, Toy &t)
{
  os << t.getName() << std::endl << t.getAscii() << std::endl;
  return (os);
}
