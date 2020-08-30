/*
** String.c for String.c in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:27:15 2017 Rayan
** Last update Fri Jan  6 15:29:44 2017 Rayan
*/


#include "./String.h"

static void	clear(String *this);

void		StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  this->clear = &clear;
}

void		StringDestroy(String *this)
{
  if (this->str != NULL)
    free(this->str);
}

static void	clear(String *this)
{
  if (this->str != NULL)
    free(this->str);
}
