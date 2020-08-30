/*
** Picture.h for Picture.h in /home/rayan/Piscine_CPP/cpp_d13/ex05
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 09:28:15 2017 Rayan
** Last update Tue Jan 17 09:28:15 2017 Rayan
*/


#ifndef PICTURE_H_
# define PICTURE_H_

# include <string>
# include <fstream>
# include <iostream>

class Picture
{
 public:
  std::string data;

  Picture(const std::string& file = "");
  Picture(Picture const &other);
  ~Picture();
  bool getPictureFromFile(const std::string &file);

};

#endif /* !PICTURE_H_ */
