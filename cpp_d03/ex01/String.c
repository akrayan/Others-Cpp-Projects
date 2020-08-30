/*
** String.c for String.c in /home/rayan/Piscine_CPP/cpp_d03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:27:15 2017 Rayan
** Last update Fri Jan  6 12:04:26 2017 Rayan
*/


#include "./String.h"

static void	assign_s(String *this, String const *str);
static void	assign_c(String *this, char const *s);

void	StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
  this->append_s = &append_s;
  this->append_c = &append_c;
}

void	StringDestroy(String *this)
{
  if (this->str != NULL)
    free(this->str);
}

static void	assign_s(String *this, String const *str)
{
  if (this->str != NULL)
    free(this->str);
  this->str = strdup(str->str);
}

static void	assign_c(String *this, char const *s)
{
  if (this->str != NULL)
    free(this->str);
  this->str = strdup(s);
}
