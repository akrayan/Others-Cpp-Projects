//
// Borg.cpp for Borg.cpp in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 12:22:16 2017 Rayan
// Last update Tue Jan 10 22:09:13 2017 Rayan
//

#include "Federation.hh"
#include "WarpSystem.hh"
#include "Borg.hh"

Borg::Ship::Ship() {
    this->_side = 300;
    this->_maxWarp = 9;
    this->_home = EARTH;
    this->_location = this->_home;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\n" << "Your biological characteristics and technologies will be assimilated.\n" <<"Resistance is futile." << std::endl;
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = core;
}

void Borg::Ship::checkCore()
{
    std::string tmp;
    if (this->core->checkreactor()->isStable())
        tmp = "Everything is in order.";
    else
        tmp = "Critical failure imminent.";
    std::cout << tmp << std::endl;
}

bool Borg::Ship::move(int warp, Destination d) {
    if (warp <= this->_maxWarp || d != this->_location || this->core->checkreactor()->isStable())
    {
        this->_location = d;
        return true;
    }
    return false;
}

bool Borg::Ship::move(int warp) {
    if (warp <= this->_maxWarp || this->core->checkreactor()->isStable())
    {
        this->_location = _home;
        return true;
    }
    return false;
}

bool Borg::Ship::move(Destination d) {
    if (d != this->_location || this->core->checkreactor()->isStable())
    {
        this->_location = d;
        return true;
    }
    return false;
}

bool Borg::Ship::move() {
    if (this->core->checkreactor()->isStable())
    {
        this->_location = _home;
        return true;
    }
    return false;
}
