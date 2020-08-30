/*
** LittleHand.h for LittleHand.h in /home/rayan/Piscine_CPP/cpp_d14m/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan 18 09:07:52 2017 Rayan
** Last update Wed Jan 18 09:07:52 2017 Rayan
*/


#ifndef LITTLEHAND_H_
# define LITTLEHAND_H_

#include <iostream>
#include <string>
#include "Lemon.h"
#include "Banana.h"
#include "FruitBox.h"
#include "Lime.h"
#include "Coconut.h"

class LittleHand
{
 public:
    LittleHand();
  ~LittleHand();
  static void   sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
  static FruitBox * const * organizeCoconut(Coconut const * const * coconuts_packet);
};

#endif /* LITTLEHAND_H_ */
