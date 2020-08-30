/*
** String.h for String.h in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:28:09 2017 Rayan
** Last update Fri Jan  6 15:23:48 2017 Rayan
*/

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct	String
{
  char		*str;

  void		(*clear)(struct String *this);
}		String;

void		StringInit(String *this, char const *s);
void		StringDestroy(String *this);

#endif /* STRING_H */
