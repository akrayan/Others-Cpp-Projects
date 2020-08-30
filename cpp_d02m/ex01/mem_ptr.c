/*
** mem_ptr.c for mem_ptr.c in /home/rayan/Piscine_CPP/cpp_d02/ex03
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 13:13:00 2017 Rayan
** Last update Fri Jan  6 08:05:42 2017 Rayan
*/

#include <stdlib.h>
#include <string.h>
#include "mem_ptr.h"

void	add_str(char *str1, char *str2, char **res)
{
  *res = malloc(strlen(str1) + strlen(str2) + 1);
  memset(*res, 0, strlen(str1) + strlen(str2) + 1);
  strcpy(*res, str1);
  strcpy(*res, str2);
}

void	add_str_struct(t_str_op *str_op)
{
  add_str(str_op->str1, str_op->str2, &str_op->res);
}
