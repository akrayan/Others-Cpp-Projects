//
// Federation.cpp for Federation.cpp in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 10:05:54 2017 Rayan
// Last update Wed Jan 11 09:34:26 2017 Rayan
//

#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  this->Core = NULL;
  std::cout << "The ship USS "<< name << " has been finished. It is " << length << " m in length and " << width << " m in width.\nIt can go to Warp " << maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{
  this->_length = 0;
  this->_width = 0;
  this->_name = "";
  this->_maxWarp = 0;
}

void	Federation::Starfleet::Ship::setupCore(WarpSystem::Core *moteur)
{
  this->Core = moteur;
  std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void	Federation::Starfleet::Ship::checkCore()
{
  if ((this->Core->checkReactor())->isStable())
    std::cout << "USS " << this->_name << ": The core is stable at the time." << std::endl;
  else
    std::cout << "USS " << this->_name << ": The core is unstable at the time." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = 1;
  this->Core = NULL;
  std::cout << "The independant ship "<< name << " just finished its construction. It is " << length << " m in length and " << width << " m in width." << std::endl;
}

Federation::Ship::~Ship()
{
  this->_length = 0;
  this->_width = 0;
  this->_name = "";
  this->_maxWarp = 0;
  this->Core = NULL;
}

void	Federation::Ship::setupCore(WarpSystem::Core *moteur)
{
  this->Core = moteur;
  std::cout << this->_name << ": The core is set." << std::endl;
}

void	Federation::Ship::checkCore()
{
  if ((this->Core->checkReactor())->isStable())
    std::cout << this->_name << ": The core is stable at the time." << std::endl;
  else
    std::cout << this->_name << ": The core is unstable at the time." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
  this->_name = name;
}

Federation::Starfleet::Captain::~Captain()
{

}

std::string	Federation::Starfleet::Captain::getName()
{
  return (this->_name);
}

int		Federation::Starfleet::Captain::getAge()
{
  return (this->_age);
}

void	Federation::Starfleet::Captain::setAge(int age)
{
  this->_age = age;
}

void	Federation::Starfleet::Ship::promote(Captain *capt)
{
  std::cout << capt->getName() << ": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
  this->_name = name;
  std::cout << "Ensign " << this->_name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{

}
