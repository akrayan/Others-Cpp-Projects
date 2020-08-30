/*
** sickkoala.c for sickkoale.c in /home/rayan/Piscine_CPP/cpp_d06/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Mon Jan  9 16:11:04 2017 Rayan
// Last update Tue Jan 10 00:35:11 2017 Rayan
*/

#include <iostream>
#include <string>
#include <cstring>
#include "sickkoala.h"

SickKoala::SickKoala(std::string name)
{
  this->name = name;
}

SickKoala::~SickKoala()
{
  std::cout << "Mr. " << this->name << ": Kreooogg!! Je suis gueriiii!" << std::endl;
}

void	SickKoala::poke()
{
  std::cout << "Mr. " << this->name << ": Gooeeeeerrk!!: '(" << std::endl;
}

bool	SickKoala::takeDrug(std::string drug)
{
  if (strcasecmp(drug.c_str(), "mars") == 0)
    std::cout << "Mr. " << this->name << ": Mars, et ca kreog!" << std::endl;
  else if (drug == "Buronzand")
    std::cout << "Mr. " << this->name << ": Et la fatigue a fait son temps!" << std::endl;
  else
    {
      std::cout << "Mr. " << this->name << ": Goerkreog !" << std::endl;
      return (false);
    }
  return (true);
}

void	SickKoala::overDrive(std::string s)
{
  size_t	i;

  while ((i = s.find("Kreog!")) != std::string::npos)
    s.replace(i, 6, "1337!", 0, 5);
  std::cout << s << std::endl;
}
