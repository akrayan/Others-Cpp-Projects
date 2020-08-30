/*
** simple_btree.c for simple_btree.c in /home/rayan/Piscine_CPP/cpp_d02a/ex01
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 16:20:36 2017 Rayan
** Last update Fri Jan  6 08:19:35 2017 Rayan
*/

#include <stdlib.h>
#include <stdio.h>
#include "./simple_btree.h"

t_bool		btree_is_empty(t_tree tree)
{
  t_bool	b;

  b = TRUE;
  if (tree != NULL)
    return (b);
  b = FALSE;
  return (b);
}

unsigned int	btree_get_size(t_tree tree)
{
  unsigned int	i;

  i = 0;
  if (tree == NULL)
    return (0);
  if (tree->left != NULL)
    i = i + btree_get_size(tree->left);
  if (tree->right != NULL)
    i = i + btree_get_size(tree->right);
  i++;
  return (i);
}

unsigned int	btree_get_depth(t_tree tree)
{
  unsigned int	i;
  unsigned int	j;

  i = 0;
  j = 0;
  if (tree == NULL)
    return (0);
  if (tree->left != NULL)
    i = i + btree_get_depth(tree->left);
  if (tree->right != NULL)
    j = j+ btree_get_depth(tree->right);
  if (i < j)
    i = j;
  i++;
  return (i);
}

t_bool		btree_create_node(t_tree *node_ptr, double value)
{
  t_bool	b;
  t_tree	n;

  b = FALSE;
  if ((n = malloc(sizeof(t_tree))) == NULL)
    return (b);
  n->left = NULL;
  n->right = NULL;
  n->value = value;
  *node_ptr = n;
  b = TRUE;
  return (b);
}

t_bool		btree_delete(t_tree *root_ptr)
{
  t_bool	b;
  t_tree	n;

  n = *root_ptr;
  b = FALSE;
  if (n == NULL)
    return (b);
  if (n->left != NULL)
    btree_delete(&n->left);
  if (n->right != NULL)
    btree_delete(&n->right);
  free(n);
  *root_ptr = NULL;
  b = TRUE;
  return (b);
}

double		btree_get_max_value(t_tree tree)
{
  double	i;
  double	j;

  if (tree == NULL)
    return (0);
  if (tree->left == NULL && tree->right == NULL)
    return (tree->value);
  if (tree->left != NULL)
    i = btree_get_max_value(tree->left);
  if (tree->right != NULL)
    j = btree_get_max_value(tree->right);
  if (i < j)
    i = j;
  if (i < tree->value)
    i = tree->value;
  return (i);
}

double		btree_get_min_value(t_tree tree)
{
  double	i;
  double	j;

  if (tree == NULL)
    return (0);
  if (tree->left == NULL && tree->right == NULL)
    return (tree->value);
  if (tree->left != NULL)
    i = btree_get_min_value(tree->left);
  if (tree->right != NULL)
    j = btree_get_min_value(tree->right);
  if (i > j)
    i = j;
  if (i > tree->value)
    i = tree->value;
  return (i);
}
