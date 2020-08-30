/*
** simple_list.c for simple_list.c in /home/thenascrazy/tek2/Piscine/Exercices/cpp_d02a/ex00
**
** Made by Afou Nacerdine
** Login   <nacerdine.afou@epitech.net>
**
** Started on  Thu Jan  5 15:29:35 2017 Afou Nacerdine
** Last update Fri Jan  6 08:18:29 2017 Rayan
*/

#include <stdlib.h>
#include <stdio.h>
#include "simple_list.h"

unsigned int	list_get_size(t_list list)
{
  unsigned int	i;
  t_list	l;

  i = 0;
  l = list;
  while (l != NULL)
    {
      l = l->next;
      i = i + 1;
    }
  return (i);
}

t_bool	list_is_empty(t_list list)
{
  if (list == NULL)
    return (TRUE);
  return (FALSE);
}

void		list_dump(t_list list)
{
  t_list	l;

  l = list;
  while (l != NULL)
    {
      printf("%f\n", l->value);
      l = l->next;
    }
}

t_bool		list_add_elem_at_front(t_list *front_ptr, double elem)
{
  t_list	ne;

  if ((ne = malloc(sizeof(t_list))) == NULL)
    return (FALSE);
  ne->value = elem;
  if (*front_ptr == NULL)
    ne->next = NULL;
  else
    ne->next = *front_ptr;
  *front_ptr = ne;
  return (TRUE);
}

t_bool		list_add_elem_at_back(t_list *front_ptr, double elem)
{
  t_list	ne;
  t_list	l;

  if ((ne = malloc(sizeof(t_list))) == NULL)
    return (FALSE);
  ne->value = elem;
  ne->next = NULL;
  l = *front_ptr;
  if (*front_ptr != NULL)
    {
      while (l->next != NULL)
	l = l->next;
      l->next = ne;
    }
  else
    *front_ptr = ne;
  return (TRUE);
}

t_bool		list_add_elem_at_position(t_list *front_ptr, double elem, unsigned int position)
{
  t_list	l;
  t_list	l_a;
  t_list	ne;

  if (position >= list_get_size(*front_ptr) || (ne = malloc(sizeof(t_list))) == NULL)
    return (FALSE);
  ne->value = elem;
  l = *front_ptr;
  l_a = l;
  if (position == 0)
    return (list_add_elem_at_front(front_ptr, elem));
  while (position > 1)
    {
      l = l->next;
      position = position - 1;
    }
  ne->next = l->next;
  l->next = ne;
  *front_ptr = l_a;
  return (TRUE);
}

t_bool		list_del_elem_at_front(t_list *front_ptr)
{
  t_list	l;

  l = *front_ptr;
  free(l);
  l = l->next;
  *front_ptr = l;
  return (TRUE);
}

t_bool		list_del_elem_at_back(t_list *front_ptr)
{
  t_list	l;

  l = *front_ptr;
  while (l->next->next != NULL)
    l = l->next;
  free(l->next);
  l->next = NULL;
  return (TRUE);
}

t_bool		list_del_elem_at_position(t_list *front_ptr, unsigned int position)
{
  t_list	l;
  t_list	l_a;

  if (position == 0)
    return (list_del_elem_at_front(front_ptr));
  if (front_ptr == NULL || position >= list_get_size(*front_ptr))
    return (FALSE);
  l = *front_ptr;
  while (position > 1)
    {
      l = l->next;
      position = position - 1;
    }
  l_a = l->next;
  l->next = l->next->next;
  free(l_a);
  return (TRUE);
}

double		list_get_elem_at_front(t_list list)
{
  if (list == NULL)
    return (0);
  return (list->value);
}

double		list_get_elem_at_back(t_list list)
{
  t_list	l;

  l = list;
  if (list == NULL)
    return (0);
  while (l->next != NULL)
    l = l->next;
  return (l->value);
}

double		list_get_elem_at_position(t_list list, unsigned int position)
{
  t_list	l;

  l = list;
  if (position == 0)
    return (list_get_elem_at_front(list));
  if (list == NULL || position >= list_get_size(list))
    return (0);
  while (position > 0)
    {
      l = l->next;
      position = position - 1;
    }
  return (l->value);
}

t_node		*list_get_first_node_with_value(t_list list, double value)
{
  t_list	l;

  l = list;
  while (l != NULL && l->value != value)
    l = l->next;
  if (l == NULL)
    return (NULL);
  return (l);
}
