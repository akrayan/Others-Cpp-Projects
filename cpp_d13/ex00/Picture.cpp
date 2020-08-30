//
// Picture.cpp for Picture.cpp in /home/rayan/Piscine_CPP/cpp_d13/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Mon Jan 16 14:20:57 2017 Rayan
// Last update Tue Jan 17 00:05:00 2017 Rayan
//

#include "Picture.h"

Picture::Picture(const std::string& file) : data("")
{
  if (file != "")
    getPictureFromFile(file);
}

Picture::~Picture()
{
}

bool	Picture::getPictureFromFile(const std::string& file)
{
  std::string	buff;
  std::ifstream f(file.c_str(), std::ios::in);


  if (f)
    {
      while (getline (f, buff))
        this->data = this->data + buff + "\n";
      return (true);
    }
  else
    {
      this->data = "ERROR";
      return (false);
    }
}
