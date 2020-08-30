/*
** Picture.h for Picture.h in /home/rayan/Piscine_CPP/cpp_d13/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Mon Jan 16 14:21:59 2017 Rayan
** Last update Tue Jan 17 00:15:50 2017 Rayan
*/

#ifndef PICTURE_H_
# define PICTURE_H_

# include <iostream>
# include <fstream>

class	Picture
{

 public :
  std::string data;

  Picture(const std::string& file = "");
  Picture(const Picture &p);
  ~Picture();

  bool	getPictureFromFile(const std::string& file);
  void	operator=(const Picture &p);
};

#endif
