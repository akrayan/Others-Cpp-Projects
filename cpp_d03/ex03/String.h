/*
** String.h for String.h in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:28:09 2017 Rayan
** Last update Fri Jan  6 14:21:37 2017 Rayan
*/

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct	String
{
  char		*str;

  char		(*at)(struct String *this, size_t pos);
}		String;

void		StringInit(String *this, char const *s);
void		StringDestroy(String *this);

#endif /* STRING_H */
