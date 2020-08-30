//
// LittleHand.cpp for LittleHand in /home/rayan/Piscine_CPP/cpp_d14m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 17 14:07:56 2017 Rayan
// Last update Tue Jan 17 15:44:37 2017 Rayan
//

#include "LittleHand.h"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}

void	LittleHand::sortFruitBox(FruitBox& unsorted,
				 FruitBox& lemons,
				 FruitBox& bananas,
				 FruitBox& limes)
{
  int	i;
  Fruit	*tmp;

  i = 0;
  while (i < unsorted.nbFruits())
    {
      tmp = unsorted.pickFruit();
      if (tmp->getName() == "lemon")
	lemons.putFruit(tmp);
      else if (tmp->getName() == "banana")
	bananas.putFruit(tmp);
      else if (tmp->getName() == "lime")
	limes.putFruit(tmp);
      if (unsorted.head() != NULL && tmp == (unsorted.head())->fruit)
	{
	  unsorted.putFruit(tmp);
	  i++;
	}
    }
}
