/*
** menger.c for menger.c in /home/rayan/Piscine_CPP/cpp_d01/01
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan  4 15:58:19 2017 Rayan
** Last update Wed Jan  4 17:08:04 2017 Rayan
*/

#include <stdio.h>

int	boucle(int s, int d, int x, int y)
{
  int	tmp;

  tmp = s;
  if (d < 1)
    return (0);
  if (s > 2)
    tmp = s / 3;
  printf("%.3d %.3d %.3d\n", s, y - s / 2, x - s / 2);
  boucle(tmp, d - 1, x - s, y - s);
  boucle(tmp, d - 1, x, y - s);
  boucle(tmp, d - 1, x + s, y - s);
  boucle(tmp, d - 1, x - s, y);
  boucle(tmp, d - 1, x + s, y);
  boucle(tmp, d - 1, x - s, y + s);
  boucle(tmp, d - 1, x, y + s);
  boucle(tmp, d - 1, x + s, y + s);
  return (0);
}

int	fractal(int s, int d)
{
  int	x;
  int	y;

  x = s / 2;
  y = s / 2;
  boucle(s / 3, d, x, y);
  return (0);
}
