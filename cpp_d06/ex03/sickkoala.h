/*
** sickkoala.h for sickkoala.h in /home/rayan/Piscine_CPP/cpp_d06/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Mon Jan  9 16:09:27 2017 Rayan
** Last update Mon Jan  9 16:41:14 2017 Rayan
*/

#ifndef SICKKOALA_H
# define SICKKOALA_H

class		SickKoala
{
  std::string	name;

 public :
  SickKoala(std::string name);
  ~SickKoala();

  void	poke();
  void	overDrive(std::string s);
  bool	takeDrug(std::string drug);
};

#endif
