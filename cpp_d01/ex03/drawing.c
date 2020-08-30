/*
** bitmap_header.c for bitmap_header.c in /home/rayan/Piscine_CPP/cpp_d01/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan  4 23:16:56 2017 Rayan
** Last update Thu Jan  5 08:52:52 2017 Rayan
*/

#include "drawing.h"

void	draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color)
{
  t_point p;

  p->y = 0;
  while (p->y < size)
    {
      p->x = 0;
      while (p->x < size)
	{
	  img[p->y + orig->y][p->x + orig->x] = color;
	  p->x++;
	}
      p->y++;
    }
}
