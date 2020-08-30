/*
** Exo-1.c for Exo-1.c in /home/rayan/Piscine_CPP/cpp_d09/ex-1
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan 13 01:16:45 2017 Rayan
** Last update Fri Jan 13 01:50:09 2017 Rayan
*/

#include "Exo-1.h"

t_cthulhu	*NewCthulhu()
{
  t_cthulhu	*c;

  c = malloc(sizeof(s_cthulhu));
  c->m_power = 42;
  c->m_name = "Cthulhu";
  printf("---\nBulding Cthulhu\n");
  return (c);
}

void		PrintPower(t_cthulhu *this)
{
  if (this != NULL)
    printf("%d\n", this->m_power);
}

void		Attack(t_cthulhu *this)
{
  if (this != NULL)
    {
      if (this->m_power >= 42)
	{
	  this->m_power -= 42;
	}
    }
}

void		Sleeping(t_cthulhu *this)
{
  if (this != NULL)
    {
      this->m_power += 42000;
    }
}

t_koala		*NewKoala(char *name, char _isALegend)
{
  t_koala	*k;

  k = malloc(sizeof(t_koala));
  k->m_parent.m_name = name;
  k->m_parent.m_power = 0;
  k->m_isALegend = _isALegend;
  printf("---\nBulding Cthulhu\nBulding %s\n", name);
  return (k);
}

void		Eat(t_koala *this)
{
  if (this != NULL)
    {
      if (this->m_parent != NULL)
	{
	  this->m_parent->m_power += 42;
	}
    }
}
