/*
** Banana.h for Banana.h in /home/rayan/Piscine_CPP/cpp_d14m/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan 18 09:02:04 2017 Rayan
** Last update Wed Jan 18 09:02:06 2017 Rayan
*/

#ifndef BANANA_H_
# define BANANA_H_

# include "Fruit.h"

class Banana : public Fruit
{
public:
  Banana();
  ~Banana();
  int            getVitamins() const;
  std::string    getName() const;
};

#endif /* BANANA_H_ */
