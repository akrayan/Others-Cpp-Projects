/*
** FruitNode.h for FruitNode.h in /home/rayan/Piscine_CPP/cpp_d14m/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 11:00:15 2017 Rayan
** Last update Tue Jan 17 13:33:06 2017 Rayan
*/

#ifndef FRUITNODE_H_
# define FRUITNODE_H_

#include "Fruit.h"

typedef struct  FruitNode
{
  Fruit*                fruit;
  struct FruitNode*     next;
  struct FruitNode*     last;
}               FruitNode;

FruitNode       *add_elem(FruitNode* list, Fruit* f);
FruitNode	*sup_elem(FruitNode *list);

#endif
