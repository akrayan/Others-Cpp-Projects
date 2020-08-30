/*
** Fruit.h for Fruit.h in /home/rayan/Piscine_CPP/cpp_d14m/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 09:35:10 2017 Rayan
** Last update Tue Jan 17 21:53:11 2017 Rayan
*/

#ifndef FRUIT_H_
# define FRUIT_H_

# include <iostream>

class	Fruit
{
  std::string	name;
  int		_vitamins;

 public:
  Fruit(std::string name, int v);
  ~Fruit();

  std::string	getName() const;
  int		getVitamins() const;

};

#endif
