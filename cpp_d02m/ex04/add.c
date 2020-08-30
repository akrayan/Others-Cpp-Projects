/*
** add.c for add.c in /home/rayan/Piscine_CPP/cpp_d02/ex04
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 11:28:47 2017 Rayan
** Last update Fri Jan  6 09:04:23 2017 Rayan
*/

#include <stdlib.h>
#include <stdio.h>
#include "./castmania.h"

int	normal_add(int a, int b)
{
  return (a + b);
}

int	absolute_add(int a, int b)
{
  if (a < 0)
    a = a * (-1);
  if (b < 0)
    b = b * (-1);
  return (a + b);
}

void	exec_add(t_add *operation)
{
  if (operation->add_type == NORMAL)
    operation->add_op.res = normal_add(operation->add_op.a, operation->add_op.b);
  else if (operation->add_type == ABSOLUTE)
    operation->add_op.res = absolute_add(operation->add_op.a, operation->add_op.b);
}
