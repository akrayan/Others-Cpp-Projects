/*
** main.c for main.c in /home/rayan/Piscine_CPP/cpp_d01/01
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan  4 15:58:34 2017 Rayan
** Last update Wed Jan  4 17:06:27 2017 Rayan
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	fractal(int s, int d);

int	slen(char *s)
{
  int	i;

  i = -1;
  while (s[++i] != '\0');
  return (i);
}

int	mgnb(char *s)
{
  int	i;
  int	nb;
  int	p;

  i = slen(s) - 1;
  p = 1;
  nb = 0;
  while (i >= 0)
    {
      nb = nb + ((s[i] - 48) * p);
      p = p * 10;
      i--;
    }
  return (nb);
}

int	main(int ac, char **av)
{
  int	s;
  int	d;

  if (ac != 3)
    {
      write(2, "Error\n", 7);
      return (2);
    }
  s = mgnb(av[1]);
  d = mgnb(av[2]);
  if (s % 3 != 0 || d > s)
    {
      write(2, "Error\n", 7);
      return (2);
    }
  fractal(s, d);
}
