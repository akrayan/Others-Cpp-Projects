/*
** sickkoala.h for sickkoala.h in /home/rayan/Piscine_CPP/cpp_d06/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Mon Jan  9 16:09:27 2017 Rayan
** Last update Mon Jan  9 21:39:05 2017 Rayan
*/

#ifndef KOALADOCTOR_H
# define KOALADOCTOR_H

# include "sickkoala.h"

class		KoalaDoctor
{
  std::string	name;
  bool		time;
 public :
   KoalaDoctor(std::string n);
   ~KoalaDoctor();

  void	diagnose(SickKoala *sk);
  void	timeCheck();
};

#endif
