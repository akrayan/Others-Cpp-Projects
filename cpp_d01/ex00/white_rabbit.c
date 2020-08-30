/*
** white_rabbit.c for white_rabbit.c in /home/rayan/Piscine_CPP/cpp_d01/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan  4 10:17:44 2017 Rayan
** Last update Thu Jan  5 09:32:15 2017 Rayan
*/

#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int	find_the_white_rabbit()
{
  int	r;
  int	s;

  r = 0;
  s = 0;
  while (!(r == 1 || r == 37 || s >= 397))
    {
      r = 1 + random() % 37;
      if (r == 15 || r == 10 || r == 23)
	write(1, "devant\n", 7);
      else if (r == 13 || r >= 34)
	write(1, "droite\n", 7);
      else if (r == 26 || r % 8 == 0)
	write(1, "derriere\n", 9);
      else if ((r >= 4 && r <= 6) || (r >= 17 && r <= 21))
	write(1, "gauche\n", 7);
      s = s + r;
    }
  write(1, "LAPIN !!!\n", 9);
  return(s);
}
