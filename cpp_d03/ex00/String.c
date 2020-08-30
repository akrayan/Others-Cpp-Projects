/*
** String.c for String.c in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:27:15 2017 Rayan
** Last update Fri Jan  6 12:02:46 2017 Rayan
*/


#include "./String.h"

void	StringInit(String *this, char const *s)
{
  this->str = strdup(s);
}

void	StringDestroy(String *this)
{
  if (this->str != NULL)
    free(this->str);
}
