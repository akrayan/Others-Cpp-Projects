//
// Buzz.cpp for Buzz.cpp in /home/rayan/Piscine_CPP/cpp_d13/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 00:25:43 2017 Rayan
// Last update Tue Jan 17 09:26:18 2017 Rayan
//

#include "Buzz.h"

Buzz::Buzz(std::string name, std::string fn)
{
  this->name = name;
  this->type = BUZZ;
  this->pic.getPictureFromFile(fn);
}

Buzz::~Buzz()
{
}

void            Buzz::speak(std::string str)
{
  std::cout << "BUZZ: "<< this->name << " \"" << str << "\"" << std::endl;
}
