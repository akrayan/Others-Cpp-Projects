/*
** FruitBox.h for FruitBox.h in /home/rayan/Piscine_CPP/cpp_d14m/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 10:24:24 2017 Rayan
** Last update Tue Jan 17 21:59:34 2017 Rayan
*/

#ifndef FRUITBOX_H_
# define FRUITBOX_H_

# include "Fruit.h"
# include "FruitNode.h"

class	FruitBox
{
  int		size;
  int		nbf;
  FruitNode*	list;

 public:
  FruitBox(int size);
  ~FruitBox();

  int		nbFruits() const;
  bool		putFruit(Fruit* f);
  Fruit*	pickFruit();
  FruitNode*	head() const;
};

#endif
