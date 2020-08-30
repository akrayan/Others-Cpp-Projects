//
// Picture.cpp for Picture.cpp in /home/rayan/Piscine_CPP/cpp_d13/ex05
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 09:27:54 2017 Rayan
// Last update Tue Jan 17 09:27:55 2017 Rayan
//

#include "Picture.h"

Picture::Picture(const std::string& file)
{
  std::ifstream myfile (file.c_str(), std::ios::in);
  char		c;

  if (file != "")
    {
      if (myfile.is_open())
	{
	  while (myfile.get(c))
	    this->data = this->data + c;
	  myfile.close();
	}
      else
	this->data = "ERROR";
    }
  else
    this->data = "";
}

Picture::Picture(Picture const &other) : data(other.data)
{

}

Picture::~Picture()
{

}

bool Picture::getPictureFromFile(const std::string &file)
{
  std::ifstream myfile (file.c_str(), std::ios::in);
  char		c;

  if (file != "")
    {
      if (myfile.is_open())
	{
	  while (myfile.get(c))
	    this->data = this->data + c;
	  myfile.close();
	  return (true);
	}
      else
	this->data = "ERROR";
      return (false);
    }
  else
    {
      this->data = "";
      return (false);
    }
}
