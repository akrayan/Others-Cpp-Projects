/*
** func_ptr.c for func_ptr.c in /home/rayan/Piscine_CPP/cpp_d02/ex03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 13:10:39 2017 Rayan
** Last update Fri Jan  6 08:07:40 2017 Rayan
*/

#include "func_ptr.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	print_normal(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      write(1, &str[i], 1);
      i = i + 1;
    }
  write(1, "\n", 1);
}

void	print_reverse(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  i = i - 1;
  while (i >= 0)
    {
      write(1, &str[i], 1);
      i = i - 1;
    }
  write(1, "\n", 1);
}

void	print_upper(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	my_putchar(str[i] - 32);
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  write(1, "\n", 1);
}

void	print_42(char *str)
{
  str = str;
  write(1, "42\n", 3);
}

void	do_action(t_action action, char *str)
{
  void	(*t[4])(char *);

  t[PRINT_NORMAL] = &print_normal;
  t[PRINT_REVERSE] = &print_reverse;
  t[PRINT_UPPER] = &print_upper;
  t[PRINT_42] = &print_42;
  (*t[action])(str);
}
