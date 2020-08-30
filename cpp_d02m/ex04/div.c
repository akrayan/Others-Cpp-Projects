/*
** div.c for div.c in /home/rayan/Piscine_CPP/cpp_d02/ex04
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 11:12:29 2017 Rayan
** Last update Fri Jan  6 09:04:37 2017 Rayan
*/

#include <stdio.h>
#include "./castmania.h"

int	integer_div(int a, int b)
{
  if (b == 0)
    return (0);
  return (a / b);
}

float	decimale_div(int a, int b)
{
  float	x;
  float	y;

  x = a;
  y = b;
  if (b == 0)
    return (0);
  return (x / y);
}

void	exec_div(t_div *operation)
{
  t_integer_op	*opi;
  t_decimale_op	*opd;

  if (operation->div_type == INTEGER)
    {
      opi = (t_integer_op *)operation->div_op;
      opi->res = integer_div(opi->a, opi->b);
    }
  else if (operation->div_type == DECIMALE)
    {
      opd = (t_decimale_op *)operation->div_op;
      opd->res = decimale_div(opd->a, opd->b);
    }
}
