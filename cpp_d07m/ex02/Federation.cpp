//
// Federation.cpp for Federation.cpp in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 11:37:29 2017 Rayan
// Last update Wed Jan 11 09:27:56 2017 Rayan
//

#include "Federation.hh"
#include "WarpSystem.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    this->_home = EARTH;
    this->_location = this->_home;
    std::cout << "The ship USS " << name << " has been finished. It is " << length << " m in length and " << width << " m in width.\nIt can go to Warp " << maxWarp << "!" << std::endl;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = core;
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore() {
    std::string tmp;
    if (this->core->checkreactor()->isStable())
        tmp = "stable";
    else
        tmp = "unstable";
    std::cout << "USS " << this->_name << ": The core is " << tmp << " at the time." << std::endl;
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *caps) {
    this->captain = caps;
    std::cout << caps->getName() << ": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d) {
    if (warp <= this->_maxWarp || d != this->_location || this->core->checkreactor()->isStable())
    {
        this->_location = d;
        return true;
    }
    return false;
}

bool Federation::Starfleet::Ship::move(int warp) {
    if (warp <= this->_maxWarp || this->core->checkreactor()->isStable())
    {
        this->_location = _home;
        return true;
    }
    return false;

}

bool Federation::Starfleet::Ship::move(Destination d) {
    if (d != this->_location || this->core->checkreactor()->isStable())
    {
        this->_location = d;
        return true;
    }
    return false;
}

bool Federation::Starfleet::Ship::move() {
    if (this->core->checkreactor()->isStable())
    {
        this->_location = _home;
        return true;
    }
    return false;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = 1;
    this->_home = VULCAN;
    this->_location = this->_home;
    std::cout << "The independant ship " << name << " just finished its construction. It is " << length << " m in length and " << width << " m in width." << std::endl;
}

void Federation::Ship::setupCore(WarpSystem::Core *core) {
    this->core = core;
    std::cout << this->_name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore() {
    std::string tmp;

    if (this->core->checkreactor()->isStable())
       tmp = "stable";
    else
        tmp = "unstable";
    std::cout << this->_name << ": The core is " << tmp << " at the time." << std::endl;
}

bool Federation::Ship::move(int warp, Destination d) {
    if (warp <= this->_maxWarp || d != this->_location || this->core->checkreactor()->isStable())
    {
        this->_location = d;
        return true;
    }
    return false;
}

bool Federation::Ship::move(int warp) {
    if (warp <= this->_maxWarp || this->core->checkreactor()->isStable())
    {
        this->_location = _home;
        return true;
    }
    return false;
}

bool Federation::Ship::move(Destination d) {
    if (d != this->_location || this->core->checkreactor()->isStable())
    {
        this->_location = d;
        return true;
    }
    return false;
}

bool Federation::Ship::move() {
    if (this->core->checkreactor()->isStable())
    {
        this->_location = _home;
        return true;
    }
    return false;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;

}

std::string Federation::Starfleet::Captain::getName() {
    return this->_name;
}

int Federation::Starfleet::Captain::getAge() {
    return this->_age;
}

void Federation::Starfleet::Captain::setAge(int age) {
    this->_age = age;
}

Federation::Starfleet::Ensign::Ensign(std::string name) {
    std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
    this->name = name;
}
