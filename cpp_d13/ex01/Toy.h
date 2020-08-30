/*
** Toy.h for Toy.h in /home/rayan/Piscine_CPP/cpp_d13/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Mon Jan 16 16:32:03 2017 Rayan
** Last update Mon Jan 16 23:49:17 2017 Rayan
*/

#ifndef TOY_H_
# define TOY_H_

#include "Picture.h"

class	Toy
{
 public :
  enum	ToyType
  {
    BASIC_TOY,
    ALIEN,
  };

 private:
  ToyType	type;
  std::string	name;
  Picture	pic;

 public:
  Toy();
  Toy(ToyType t, std::string n, std::string fn);
  ~Toy();

  ToyType	getType();
  std::string	getName();
  std::string	getAscii();

  void		setName(std::string name);

};
#endif
