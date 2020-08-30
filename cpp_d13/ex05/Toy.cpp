//
// Toy.cpp for Toy.cpp in /home/rayan/Piscine_CPP/cpp_d13/ex05
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 09:28:33 2017 Rayan
// Last update Tue Jan 17 09:28:34 2017 Rayan
//


#include "Toy.h"

Toy::Toy() : _type(BASIC_TOY), _name("Toy")
{

}

Toy::Toy(ToyType type, std::string const &name, std::string const &file) : _type(type), _name(name), _picture(file)
{

}

Toy::Toy(Toy const &other) : _type(other._type), _name(other._name)
{

}

Toy::~Toy()
{

}

Toy::ToyType	Toy::getType() const
{
  return (this->_type);
}

std::string	Toy::getName() const
{
  return (this->_name);
}

void		Toy::setName(std::string const name)
{
  this->_name = name;
}

std::string	Toy::getAscii() const
{
  return (this->_picture.data);
}

bool		Toy::setAscii(std::string const data)
{
  bool		isvalid;

  isvalid = this->_picture.getPictureFromFile(data);
  if (isvalid == false)
    this->_error.type = Error::PICTURE;
  return (isvalid);
}

void	Toy::speak(const std::string &statement)
{
  std::cout << this->_name << " \"" << statement << "\"" << std::endl;
}

bool	Toy::speak_es(const std::string &statement)
{
  if (this->_type == BUZZ)
    {
      std::cout << "BUZZ: " << " senorita " << this->_name << " \"" << statement << "\"" << " senorita " << std::endl;
      return (true);
    }
  this->_error.type = Error::SPEAK;
  return (false);
}

Toy &Toy::operator<<(const std::string op)
{
  this->_picture.data = op;
  return (*this);
}

std::ostream &operator<<(std::ostream &os, const Toy &other)
{
  os << other.getName() << std::endl << other.getAscii() << std::endl;
  return (os);
}

std::string Toy::Error::what()
{
  if (type == PICTURE)
    return ("bad new illustration");
  else if (type == SPEAK)
    return ("wrong mode");
  else
    return ("");
}

std::string Toy::Error::where()
{
  if (type == PICTURE)
    return ("setAscii");
  else if (type == SPEAK)
    return ("speak_es");
  else
    return ("");
}

Toy::Error		Toy::getLastError()
{
  return (_error);
}
