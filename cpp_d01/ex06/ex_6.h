/*
** ex_6.h for ex_6.h in /home/rayan/Piscine_CPP/cpp_d01/ex06
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan  5 09:27:02 2017 Rayan
** Last update Thu Jan  5 09:29:33 2017 Rayan
*/



#ifndef EX_6_
# define EX_6_

union		s_foo3
{
  short		bar;
  short		foo;
};

typedef struct __attribute__((packed))	s_foo2
{
  short					foo;
  union s_foo3				bar;
}					t_foo2;

typedef union				s_foo
{
  int					bar;
  s_foo2				foo;
}					t_foo;

#endif /* !EX_6_ */
