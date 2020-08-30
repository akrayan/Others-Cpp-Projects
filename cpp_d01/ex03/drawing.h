/*
** bitmap.h for drawing.h in /home/rayan/Piscine_CPP/cpp_d01/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan  4 17:31:04 2017 Rayan
** Last update Thu Jan  5 08:38:19 2017 Rayan
*/

#ifndef DRAWING_H
# define DRAWING_H

# include <stdint.h>
# include <stdlib.h>

typedef struct	s_point
{
  unsigned int	x;
  unsigned int	y;
}		t_point;

void	draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color);

#endif /* DRAWING_H */
