/*
** Ratatouille.h for Ratatouille.h in /home/rayan/Piscine_CPP/cpp_d16/ex04
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Fri Jan 20 09:25:49 2017 Rayan
** Last update Fri Jan 20 09:25:52 2017 Rayan
*/

#ifndef RATATOUILLE_H_
# define RATATOUILLE_H_

#include <iostream>
#include <string>
#include <sstream>

class Ratatouille
{
 private:
  std::stringstream     _ratatouille;
  std::string           Res;

 public:
  Ratatouille();
  Ratatouille(Ratatouille const &);
  ~Ratatouille();
  Ratatouille   &operator=(const Ratatouille &);

  Ratatouille   &addVegetable(unsigned char);
  Ratatouille   &addCondiment(unsigned int);
  Ratatouille   &addSpice(double);
  Ratatouille   &addSauce(const std::string &);
  std::string   kooc(void);
};

# endif /* RATATOUILLE_H_ */
