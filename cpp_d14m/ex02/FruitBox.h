/*
** FruitBox.h for FruitBox.h in /home/rayan/Piscine_CPP/cpp_d14m/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan 18 09:03:29 2017 Rayan
** Last update Wed Jan 18 09:03:31 2017 Rayan
*/

#ifndef FRUITBOX_H_
# define FRUITBOX_H_

#include "Fruit.h"
#include "FruitNode.h"

class FruitBox
{
private:
  int           _size;
  int           _nb;
  FruitNode     *list;
public:
  FruitBox(int size);
  ~FruitBox();
  int           nbFruits() const;
  bool          putFruit(Fruit* f);
  Fruit*        pickFruit();
  int           getSize() const;
  FruitNode*    head() const;
};

#endif /* FRUITBOX_H_ */
