//
// Woody.cpp for Woody.cpp in /home/rayan/Piscine_CPP/cpp_d13/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 00:25:43 2017 Rayan
// Last update Tue Jan 17 00:38:03 2017 Rayan
//

#include "Woody.h"

Woody::Woody(std::string name, std::string fn)
{
  this->name = name;
  this->type = BUZZ;
  this->pic.getPictureFromFile(fn);
}

Woody::~Woody()
{
}
