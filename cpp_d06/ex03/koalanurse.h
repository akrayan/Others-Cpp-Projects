/*
** sickkoala.h for sickkoala.h in /home/rayan/Piscine_CPP/cpp_d06/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Mon Jan  9 16:09:27 2017 Rayan
** Last update Mon Jan  9 20:01:29 2017 Rayan
*/

#ifndef KOALANURSE_H
# define KOALANURSE_H

# include "sickkoala.h"

class		KoalaNurse
{
   int	id;
   bool time;

 public :
  KoalaNurse(int id);
  ~KoalaNurse();

  void	giveDrug(std::string drug, SickKoala *sk);
  std::string  readReport(std::string f);
  void		timeCheck();
};

#endif
