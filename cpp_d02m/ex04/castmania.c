/*
** castmania.c for castmanaia.c in /home/rayan/Piscine_CPP/cpp_d02/ex04
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 13:22:57 2017 Rayan
** Last update Fri Jan  6 08:10:30 2017 Rayan
*/

#include "./castmania.h"

void	exec_operation(t_instruction_type instruction_type, void *data)
{
  t_div	*tmp;

  tmp = ((t_instruction *)data)->operation;
  if (instruction_type == ADD_OPERATION)
    {
      exec_add((t_add *)tmp);
      printf("%d\n", ((t_add*)tmp)->add_op.res);
    }
  else if (instruction_type == DIV_OPERATION)
    {
      exec_div(tmp);
      if ((tmp->div_type) == DECIMALE)
	printf("%f\n", ((t_decimale_op *)tmp->div_op)->res);
      else
	printf("%d\n", ((t_integer_op *)tmp->div_op)->res);
    }
}

void	exec_instruction(t_instruction_type instruction_type, void *data)
{
  if (instruction_type == PRINT_FLOAT)
    printf("%f\n", *(float *) data);
  else if (instruction_type == PRINT_INT)
    printf("%d\n", *(int *) data);
  else
    exec_operation(instruction_type, data);
}
