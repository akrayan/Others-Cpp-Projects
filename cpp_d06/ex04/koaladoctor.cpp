/*
** sickkoala.c for sickkoale.c in /home/rayan/Piscine_CPP/cpp_d06/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Mon Jan  9 16:11:04 2017 Rayan
// Last update Tue Jan 10 09:23:51 2017 Rayan
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>
#include "sickkoala.h"
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string n)
{
  this->time = true;
  this->name = n;
  std::cout << "Dr. "<< n <<": Je suis le Dr."<< n << "! Comment Kreoggez-vous?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
  this->name = "";
}

void	KoalaDoctor::diagnose(SickKoala *sk)
{
  std::string nf = sk->getName() + ".report";
  std::ofstream file(nf.c_str() , std::ios::out | std::ios::trunc);
  std::string	drug[5] = {"mars",
			   "Buronzand",
			   "Viagra",
			   "Extasy",
			   "Eucalyptus leaf"};

  std::cout << "Dr. "<< this->name << ": Alors  qu'est-ce qui vous goerk Mr."<< sk->getName() <<" ?" << std::endl;
  sk->poke();
  file << drug[(random() % 5)];
  file.close();
}

void		KoalaDoctor::timeCheck()
{
  if (this->time)
    std::cout <<"Dr. "<< this->name <<": Je commence le travail!" << std::endl;
  else
    std::cout <<"Dr. "<< this->name <<": Je rentre dans ma foret d’eucalyptus!" << std::endl;
  this->time = !this->time;
}
