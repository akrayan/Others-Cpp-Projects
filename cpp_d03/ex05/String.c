/*
** String.c for String.c in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:27:15 2017 Rayan
** Last update Fri Jan  6 15:46:49 2017 Rayan
*/


#include "./String.h"

static int	size(String *this);

void		StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  this->size = &size;
}

void		StringDestroy(String *this)
{
  if (this->str != NULL)
    free(this->str);
}

static int     	size(String *this)
{
  if (this->str == NULL)
    return (-1);
  else
    return (strlen(this->str));
}

int	main()
{
  String s;

  StringInit(&s, "1234567");
  printf("%d", s.size(&s));
}
