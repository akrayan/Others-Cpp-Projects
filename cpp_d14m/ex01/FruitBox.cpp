//
// FruitBox.cpp for FruitBox.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 10:23:29 2017 Rayan
// Last update Tue Jan 17 21:59:51 2017 Rayan
//

#include "FruitBox.h"

FruitBox::FruitBox(int size) : size(size), nbf(0), list(NULL)
{
}

FruitBox::~FruitBox()
{
}

int		FruitBox::nbFruits() const
{
  return (nbf);
}

bool		FruitBox::putFruit(Fruit* f)
{
  FruitNode	*l;

  if (this->list != NULL)
    {
      l = this->list;
      while (l != NULL && l->fruit != f)
	l = l->next;
      if (l != NULL)
	return (false);
     }
  if (this->nbf < this->size)
    {
      this->nbf++;
      this->list = add_elem(this->list, f);
      return (true);
    }
  return (false);
}

FruitNode* FruitBox::head() const
{
  return (this->list);
}

Fruit* FruitBox::pickFruit()
{
  Fruit	*tmp;

  if (this->list == NULL)
    return (NULL);
  tmp = this->list->fruit;
  this->list = sup_elem(this->list);
  this->nbf--;
  return (tmp);
}

FruitNode       *add_elem(FruitNode* list, Fruit* f)
{
  if (list == NULL)
    {
      list = new FruitNode;
      list->next = NULL;
      list->last = list;
      list->fruit = f;
    }
  else
    {
      list->last->next = new FruitNode;
      list->last = list->last->next;
      list->last->next = NULL;
      list->last->fruit = f;
    }
  return (list);
}

FruitNode	*sup_elem(FruitNode *list)
{
  FruitNode	*tmp;

  if (list != NULL)
    {
      tmp = list;
      tmp->fruit = NULL;
      list = list->next;
      delete tmp;
    }
  return (list);
}
