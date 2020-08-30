/*
** Lemon.h for Lemon.h in /home/rayan/Piscine_CPP/cpp_d14m/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan 18 09:05:24 2017 Rayan
** Last update Wed Jan 18 09:06:13 2017 Rayan
*/

#ifndef LEMON_H_
# define LEMON_H_

# include "Fruit.h"

class Lemon : public Fruit
{
public:
  Lemon();
  ~Lemon();
  int            getVitamins() const;
  std::string    getName() const;
};

#endif /* BANANA_H_ */
