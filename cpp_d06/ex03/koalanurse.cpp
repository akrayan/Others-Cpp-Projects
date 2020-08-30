/*
** sickkoala.c for sickkoale.c in /home/rayan/Piscine_CPP/cpp_d06/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Mon Jan  9 16:11:04 2017 Rayan
// Last update Tue Jan 10 00:34:23 2017 Rayan
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "sickkoala.h"
#include "koalanurse.h"

KoalaNurse::KoalaNurse(int id)
{
  this->id = id;
  this->time = true;
}

KoalaNurse::~KoalaNurse()
{
  std::cout << "Nurse " << this->id << ": Enfin un peu de repos!" << std::endl;
}

void	KoalaNurse::giveDrug(std::string drug, SickKoala *sk)
{
  sk->takeDrug(drug);
}

std::string	KoalaNurse::readReport(std::string f)
{
  std::ifstream file(f.c_str(), std::ios::in);
  std::string	drug;
  char *name = NULL;
  size_t		n;

  drug = "";
  if ((n = f.find(".report")) != std::string::npos)
    {
      strncpy(name, f.c_str(), n);
      file >> drug;
      std::cout << "Nurse " << this->id << ": Kreog! Il faut donner un " << drug << " a Mr." <<  name << "!" << std::endl;
    }
  return (drug);
}

void		KoalaNurse::timeCheck()
{
  if (this->time)
    std::cout <<"Nurse "<< this->id <<": Je commence le travail!" << std::endl;
  else
    std::cout <<"Nurse "<< this->id <<": Je rentre dans ma foret d'eucalyptus!" << std::endl;
  this->time = !this->time;
}
