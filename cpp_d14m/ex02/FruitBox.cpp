//
// FruitBox.cpp for FruitBox.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:03:45 2017 Rayan
// Last update Wed Jan 18 09:03:47 2017 Rayan
//

#include "FruitBox.h"

FruitBox::FruitBox(int size) : _size(size), _nb(0), list(NULL)
{
}

FruitBox::~FruitBox() {}


int FruitBox::nbFruits() const
{
  return this->_nb;
}

int FruitBox::getSize() const
{
  return _size;
}


bool FruitBox::putFruit(Fruit *f)
{
  FruitNode *tmp;
  FruitNode *elem;

  int nb = 1;

  if (nb > _size)
    return false;
  if (list == NULL)
  {
    list = new FruitNode;
    list->fruit = f;
    list->next = NULL;
    _nb = _nb + 1;
    return true;
  }
  tmp = list;
  while (tmp != NULL && tmp->next != NULL)
  {
    if (tmp->fruit == f || nb >= _size)
      return false;
    nb++;
    tmp = tmp->next;
  }
  if (nb >= _size)
    return false;
  if (tmp->fruit == f)
    return false;
  elem = new FruitNode;
  elem->fruit = f;
  elem->next = NULL;
  tmp->next = elem;
  _nb++;
  return true;
}

Fruit *FruitBox::pickFruit()
{
  FruitNode *tmp;
  Fruit *f;

  if (this->list == NULL)
    return (NULL);
  f = list->fruit;
  tmp = this->list;
  this->list = this->list->next;
  delete tmp;
  this->_nb--;
  return (f);
  //return (tmp->fruit);
}

FruitNode       *FruitBox::head() const
{
  return list;
}
