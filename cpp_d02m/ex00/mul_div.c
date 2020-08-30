/*
** mul_div.c for mul_div.c in /home/rayan/Piscine_CPP/cpp_d02/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 09:12:08 2017 Rayan
** Last update Thu Jan  5 10:05:06 2017 Rayan
*/

void	add_mul_4param(int first, int second, int *add, int *mul)
{
  *add = first + second;
  *mul = first * second;
}

void	add_mul_2param(int *first, int *second)
{
  int	i;

  i = *first + *second;
  *mul = *first * *second;
  *add = i;
}
