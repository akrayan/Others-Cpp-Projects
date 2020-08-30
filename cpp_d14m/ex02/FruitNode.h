/*
** FruitNode.h for FruitNode.h in /home/rayan/Piscine_CPP/cpp_d14m/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan 18 09:04:50 2017 Rayan
** Last update Wed Jan 18 09:04:51 2017 Rayan
*/

#ifndef FRUITNODE_H_
# define FRUITNODE_H_

#include "Fruit.h"

struct FruitNode
{
  Fruit         *fruit;
  FruitNode     *next;
};

#endif /* FRUITNODE_H_ */
