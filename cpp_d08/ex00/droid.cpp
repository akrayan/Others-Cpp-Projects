//
// droid.cpp for droid.cpp in /home/rayan/Piscine_CPP/cpp_d08/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 11 09:56:07 2017 Rayan
// Last update Thu Jan 12 09:56:53 2017 Rayan
//

#include <iostream>
#include "droid.hh"

Droid::Droid(std::string id) : Id(id), Energy(50), Attack(25), Toughness(15)
{
  this->Status = new std::string("Standing by");
  std::cout << "Droid \'" << this->Id << " Activated" << std::endl;
}

Droid::Droid(Droid& d) : Id(d.Id), Energy(d.Energy), Attack(d.Attack), Toughness(d.Toughness), Status(d.Status)
{
  std::cout << "Droid \'" << this->Id << " Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
  std::cout << "Droid \'" << this->Id << " Destroyed" << std::endl;
  delete this->Status;
}

std::string	Droid::getId()
{
  return (this->Id);
}

size_t		Droid::getEnergy()
{
  return (this->Energy);
}

size_t		Droid::getAttack()
{
  return (this->Attack);
}

size_t		Droid::getToughness()
{
  return (this->Toughness);
}

std::string	*Droid::getStatus()
{
  return (this->Status);
}

void		Droid::setId(size_t i)
{
  this->Id = i;
}

void		Droid::setEnergy(size_t i)
{
  this->Energy = i;
}

void		Droid::setStatus(std::string *s)
{
  this->Status = s;
}

bool		Droid::operator==(Droid & d)
{
  if (this->Id == d.Id)
    {
      if (this->Energy == d.Energy)
	{
	  if (*(this->Status) == *(d.Status))
	    return (true);
	}
    }
  return (false);
}

bool		Droid::operator!=(Droid & d)
{
  return (!(*(this) == d));
}

void		Droid::operator<<(size_t & pile)
{
  this->Energy = this->Energy + pile;
  if (this->Energy > 100)
    this->Energy = 100;
}

std::ostream& operator<<(std::ostream& os, Droid const &d)
{
  os << "Droid \'" << d.getId() << "\', " << d.getStatus() << ", " << d.getEnergy();
}
