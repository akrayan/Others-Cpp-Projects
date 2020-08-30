//
// LittleHand.cpp for LittleHand.cpp in /home/rayan/Piscine_CPP/cpp_d14m/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:07:32 2017 Rayan
// Last update Wed Jan 18 09:07:34 2017 Rayan
//

#include "LittleHand.h"

LittleHand::LittleHand() {}

LittleHand::~LittleHand() {}

void LittleHand::sortFruitBox(FruitBox& unsorted,
  FruitBox& lemons,
  FruitBox& bananas,
  FruitBox& limes)
  {
    FruitNode *tmp = unsorted.head();
    Fruit *frute;
    int i = -1;

    while (++i < unsorted.nbFruits() && tmp)
    {
      frute = tmp->fruit;
      if (frute->getName() == "lemon")
      {
        if (lemons.putFruit((frute = unsorted.pickFruit())) == false)
          unsorted.putFruit(frute);
      }
      else if (frute->getName() == "banana")
      {
        if (bananas.putFruit((frute = unsorted.pickFruit())) == false)
          unsorted.putFruit(frute);
      }
      else if (frute->getName() == "lime")
      {
        if (limes.putFruit((frute = unsorted.pickFruit())) == false)
          unsorted.putFruit(frute);
      }
      tmp = tmp->next;
    }
  }

FruitBox * const * LittleHand::organizeCoconut(Coconut const * const * coconuts_packet)
{
  int size = -1;
  FruitBox **pack;
  Coconut** coco = const_cast<Coconut **>(coconuts_packet);
  int j = -1;

  while (coconuts_packet[++size] != 0);
  if (size % 6 == 0)
    size = size / 6;
  else
    size = size / 6 + 1;
  pack = new FruitBox*[size + 1];
  for (int i = 0; i < size; i++)
    pack[i] = new FruitBox(6);
  while (coconuts_packet[++j])
    pack[j / 6]->putFruit(coco[j % 6]);
  return pack;
}
