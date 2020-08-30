//
// WarpSystem.cpp for WarpSystem.cpp in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 09:57:24 2017 Rayan
// Last update Wed Jan 11 09:36:43 2017 Rayan
//

#include "Federation.hh"

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

void	WarpSystem::QuantumReactor::setStability(bool stability)
{
  this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *coreReactor)
{
  this->_coreReactor = coreReactor;
}

WarpSystem::Core::~Core()
{
  this->_coreReactor = NULL;
}

WarpSystem::QuantumReactor	*WarpSystem::Core::checkReactor()
{
  return(this->_coreReactor);
}
