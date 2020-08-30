/*
** Lime.h for Lime.h in /home/rayan/Piscine_CPP/cpp_d14m/ex01
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 13:59:32 2017 Rayan
** Last update Tue Jan 17 15:41:46 2017 Rayan
*/

#ifndef LITTLEHAND_H_
# define LITTLEHAND_H_

#include "Lime.h"
#include "Banana.h"
#include "FruitBox.h"

class	LittleHand
{
 public:
  LittleHand();
  ~LittleHand();

  static void   sortFruitBox(FruitBox& unsorted,
		       FruitBox& lemons,
		       FruitBox& bananas,
		       FruitBox& limes);
};

#endif
