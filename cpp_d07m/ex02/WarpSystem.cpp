//
// WarpSystem.cpp for WarpSystem.cpp in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 11:46:02 2017 Rayan
// Last update Tue Jan 10 22:11:35 2017 Rayan
//

#include <iostream>
#include "WarpSystem.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
    this->_stability = true;
}

bool WarpSystem::QuantumReactor::isStable()
{
    return this->_stability;
}

void WarpSystem::QuantumReactor::setStability(bool stab)
{
    this->_stability = stab;
}

WarpSystem::Core::Core(WarpSystem::QuantumReactor *_coreReactor)
{
    this->_coreReactor = _coreReactor;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkreactor() {
    return this->_coreReactor;
}
