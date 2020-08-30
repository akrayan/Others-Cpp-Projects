//
// Borg.cpp for Borg.cpp in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 16:45:17 2017 Rayan
// Last update Wed Jan 11 09:32:22 2017 Rayan
//

#include "Borg.hh"

Borg::Ship::Ship()
{
  this->_side = 300;
  this->_maxWarp = 9;
  std::cout << "We are the Borgs. Lower your shields ad surrender yourselves unconditionally." << std::endl;
  std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
  std::cout << "Resistance is futile." << std::endl;
}

Borg::Ship::~Ship()
{

}

void	Borg::Ship::setupCore(WarpSystem::Core *m)
{
  this->Core = m;
}

void	Borg::Ship::checkCore()
{
  if ((this->Core->checkReactor())->isStable())
    std::cout << "Everything is in order." << std::endl;
  else
    std::cout << "Critical failure imminent." << std::endl;
}
