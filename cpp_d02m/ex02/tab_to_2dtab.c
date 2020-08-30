/*
** tab_to_2dtab.c for tab_to_2dtab.c in /home/rayan/Piscine_CPP/cpp_d02/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 10:11:54 2017 Rayan
** Last update Thu Jan  5 11:03:18 2017 Rayan
*/

#include <stdlib.h>
#include <stdio.h>

void	tab_to_2dtab(int *tab, int length, int width, int ***res)
{
  int	j;
  int	i;
  int	k;

  if ((*res = malloc(sizeof(char *) * (length + 1))) == NULL)
    return;
  j = -1;
  while (++j < length)
    {
      if (((*res)[j] = malloc(width)) == NULL)
	return;
    }
  (*res)[j] = NULL;
  j = -1;
  k = 0;
  while (++j < length)
    {
      i = -1;
      while (++i < width)
	{
	  (*res)[j][i] = tab[k];
	  k++;
	}
    }
}
