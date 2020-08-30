/*
** String.c for String.c in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:27:15 2017 Rayan
** Last update Fri Jan  6 12:21:59 2017 Rayan
*/


#include "./String.h"

static void	append_s(String *this, String const *ap);
static void	append_c(String *this, char const *aps);

void	StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  this->append_s = &append_s;
  this->append_c = &append_c;
}

void	StringDestroy(String *this)
{
  if (this->str != NULL)
    free(this->str);
}

static void	append_s(String *this, String const *ap)
{
  append_c(this, ap->str);
}

static void	append_c(String *this, char const *aps)
{
  char		*b;

  if (aps != NULL)
    {
      if (this->str == NULL)
	this->str = strdup(aps);
      else
	{
	  b = malloc(strlen(aps) + strlen(this->str) + 1);
	  strcpy(b, this->str);
	  strcat(b, strdup(aps));
	  free(this->str);
	  this->str = b;
	}
    }
}
