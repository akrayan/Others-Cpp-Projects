//
// Skat.cpp for Skat.cpp in /home/rayan/Piscine_CPP/cpp_d07a/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 15:44:54 2017 Rayan
// Last update Wed Jan 11 09:21:27 2017 Rayan
//

#include <iostream>
#include "Skat.h"

Skat::Skat(std::string const& name, int stimPaks)
{
  this->_name = name;
  this->_stimPaks = stimPaks;
}

Skat::Skat(int stimPaks)
{
  this->_name = "bob";
  this->_stimPaks = stimPaks;
}

Skat::Skat(std::string const& name)
{
  this->_name = name;
  this->_stimPaks = 15;
}

Skat::Skat()
{
  this->_name = "bob";
  this->_stimPaks = 15;
}

Skat::~Skat()
{

}

int&	Skat::stimPaks()
{
  int&	stock = this->_stimPaks;

  return (stock);
}

const std::string&  Skat::name()
{
  const std::string&  n = this->_name;

  return (n);
}

void Skat::shareStimPaks(int number, int& stock)
{
  if (number <= this->_stimPaks)
    {
      stock = stock + number;
      this->_stimPaks = this->_stimPaks - number;
      std::cout << "Keep the change." << std::endl;
    }
  else
    std::cout << "Don't be greedy" << std::endl;
}

void Skat::addStimPaks(unsigned int number)
{
  if (number > 0)
    {
      this->_stimPaks = this->_stimPaks + number;
    }
  else
    std::cout << "Hey boya, did you forget somethig ?" << std::endl;
}

void Skat::useStimPaks()
{
  if (this->_stimPaks > 0)
    {
      this->_stimPaks--;
      std::cout << "Time to kick some ass and chew bubble gum" << std::endl;
    }
  else
    std::cout << "Mediiiiiic"  << std::endl;
}


void Skat::status()
{
  std::cout << "Soldier " << this->_name <<" reporting " << this->_stimPaks << " stimpaks remaining sir !" << std::endl;
}
