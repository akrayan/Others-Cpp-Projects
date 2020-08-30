/*
** Fruit.h for FRuit.h in /home/rayan/Piscine_CPP/cpp_d14m/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan 18 09:04:26 2017 Rayan
** Last update Wed Jan 18 09:04:27 2017 Rayan
*/

#ifndef FRUIT_H_
# define FRUIT_H_

# include <iostream>
# include <string>

class Fruit
{
 protected:
  int           _vitamins;
  std::string   _name;

 public:
  Fruit();
  virtual ~Fruit();
  virtual int           getVitamins() const;
  virtual std::string   getName() const;
};

#endif /* FRUIT_H_ */
