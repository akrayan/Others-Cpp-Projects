//
// WarpSystem.cpp for WarpSystem.cpp in /home/rayan/Piscine_CPP/cpp_d07m/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 10:45:07 2017 Rayan
// Last update Tue Jan 10 16:26:02 2017 Rayan
//

#include <iostream>
#include "WarpSystem.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
  this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{

}

bool	WarpSystem::QuantumReactor::isStable()
{
  return (this->_stability);
}

void	WarpSystem::QuantumReactor::setStability(bool b)
{
  this->_stability = b;
}

WarpSystem::Core::Core(QuantumReactor *cr)
{
  this->_coreReactor = cr;
}

WarpSystem::Core::~Core()
{
  this->_coreReactor = NULL;
}

WarpSystem::QuantumReactor	*WarpSystem::Core::checkReactor()
{
  return(this->_coreReactor);
}
