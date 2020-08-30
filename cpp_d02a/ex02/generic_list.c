/*
** generic_list.c for generic_list.c in /home/rayan/Piscine_CPP/cpp_d02a/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan  6 09:13:42 2017 Rayan
** Last update Fri Jan  6 09:16:10 2017 Rayan
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "generic_list.h"

unsigned int	list_get_size(t_list list)
{
  unsigned int	i;
  t_list	l;

  i = 0;
  l = list;
  while (l != NULL)
    {
      i = i + 1;
      l = l->next;
    }
  return (i);
}

t_bool		list_is_empty(t_list list)
{
  if (list == NULL)
    return (TRUE);
  return (FALSE);
}

void		list_dump(t_list list, t_value_displayer val_disp)
{
  t_list	l;

  l = list;
  while (l != NULL)
    {
      val_disp(l->value);
      l = l->next;
    }
}

t_bool		list_add_elem_at_front(t_list *front_ptr, void *elem)
{
  t_list	e;

  if ((e = malloc(sizeof(t_node))) == NULL)
    return (FALSE);
  e->value = elem;
  e->next = (*front_ptr);
  *front_ptr = e;
  return (TRUE);
}

t_bool		list_add_elem_at_back(t_list *front_ptr, void *elem)
{
  t_list	l;
  t_list	e;

  l = (*front_ptr);
  if ((e = malloc(sizeof(t_node))) == NULL)
    return (FALSE);
  e->value = elem;
  if (l)
    {
      while (l->next != NULL)
	l = l->next;
      l->next = e;
    }
  else
    *front_ptr = e;
  e->next = NULL;
  return (TRUE);
}

t_bool		list_add_elem_at_position(t_list *front_ptr, void *elem, unsigned int position)
{
  unsigned int	i;
  t_list	l;
  t_list	e;

  if (position == 0)
    return (list_add_elem_at_front(front_ptr, elem));
  if (position >= list_get_size(*front_ptr))
    return (FALSE);
  i = 1;
  l = (*front_ptr);
  if ((e = malloc(sizeof(t_node))) == NULL)
    return (FALSE);
  e->value = elem;
  while (i < position && l->next != NULL)
    {
      l = l->next;
      ++i;
    }
  e->next = l->next;
  l->next = e;
  return (TRUE);
}

t_bool		list_del_elem_at_front(t_list *front_ptr)
{
  t_list	l;

  l = *front_ptr;
  if (*front_ptr == NULL)
    return (FALSE);
  *front_ptr = (*front_ptr)->next;
  free(l);
  return (TRUE);
}

t_bool		list_del_elem_at_back(t_list *front_ptr)
{
  t_list	l;

  l = *front_ptr;
  if (*front_ptr == NULL)
    return (FALSE);
  if ((*front_ptr)->next == NULL)
    *front_ptr = NULL;
  while (l->next->next != NULL)
    l = l->next;
  free(l->next);
  l->next = NULL;
  return (TRUE);
}

t_bool		list_del_elem_at_position(t_list *front_ptr, unsigned int position)
{
  unsigned int	i;
  t_list	l;
  t_list	toFree;

  if (*front_ptr == NULL)
    return (FALSE);
  if (position >= list_get_size(*front_ptr))
    return (FALSE);
  if (position == 0)
    return (list_del_elem_at_front(front_ptr));
  i = 1;
  l = *front_ptr;
  while (i < position && l->next->next != NULL)
    l = l->next;
  toFree = l->next;
  l->next = l->next->next;
  free(toFree);
  return (TRUE);
}

void		*list_get_elem_at_front(t_list list)
{
  if (list == NULL)
    return (0);
  return (list->value);
}

void		*list_get_elem_at_back(t_list list)
{
  t_list	l;

  l = list;
  if (list == NULL)
    return (0);
  while (l->next != NULL)
    l = l->next;
  return (l->value);
}

void		*list_get_elem_at_position(t_list list, unsigned int position)
{
  unsigned int	i;
  t_list	l;

  l = list;
  i = 0;
  if (list == NULL)
    return (0);
  if (position >= list_get_size(list))
    return (0);
  if (position == 0)
    return (list_get_elem_at_front(list));
  while (i < position && l->next != NULL)
    l = l->next;
  return (l->value);
}

t_node		*list_get_first_node_with_value(t_list list, void *value, t_value_comparator val_comp)
{
  while (list != NULL && val_comp(list->value, value) != 0)
    list = list->next;
  return (list);
}

void		list_clear(t_list *front_ptr)
{
  t_list	l;

  while ((*front_ptr) != NULL)
    {
      l = *front_ptr;
      *front_ptr = (*front_ptr)->next;
      free(l);
    }
}
