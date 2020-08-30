/*
** String.c for String.c in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:27:15 2017 Rayan
** Last update Fri Jan  6 14:21:57 2017 Rayan
*/


#include "./String.h"

static char	at(String *this, size_t pos);

void		StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  this->at = &at;
}

void		StringDestroy(String *this)
{
  if (this->str != NULL)
    free(this->str);
}

static char	at(String *this, size_t pos)
{
  if (pos > strlen(this->str))
    return (-1);
  else if (pos < 0)
    return (-1);
  else
    return (this->str[pos]);
}
