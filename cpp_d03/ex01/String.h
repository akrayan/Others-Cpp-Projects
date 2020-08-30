/*
** String.h for String.h in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:28:09 2017 Rayan
** Last update Fri Jan  6 12:04:35 2017 Rayan
*/

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct	String
{
  char		*str;

  void		(*assign_s)(struct String *this, struct String const *str);
  void		(*assign_c)(struct String *this, char const *str);
}		String;

void		StringInit(String *this, char const *s);
void		StringDestroy(String *this);

#endif /* STRING_H */
