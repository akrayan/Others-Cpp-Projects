/*
** Exo-1.h for Exo-1.h in /home/rayan/Piscine_CPP/cpp_d09/ex-1
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan 13 01:15:24 2017 Rayan
** Last update Fri Jan 13 01:32:02 2017 Rayan
*/

#ifndef EXO_1_H_
# define EXO_1_H_

# include <stdlib.h>
# include <stdio.h>

typedef struct	s_cthulhu
{
  int		m_power;
  char		*m_name;
}		t_cthulhu;

typedef struct	s_koala
{
  t_cthulhu	m_parent;
  char		m_isALegend;
}		t_koala;

#endif
