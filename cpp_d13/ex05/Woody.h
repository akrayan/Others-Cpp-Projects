/*
** Woody.h for Woody.h in /home/rayan/Piscine_CPP/cpp_d13/ex05
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 09:29:26 2017 Rayan
** Last update Tue Jan 17 09:29:28 2017 Rayan
*/


#ifndef WOODY_H_
# define WOODY_H_

# include "Toy.h"

class Woody : public Toy
{
 public:
  Woody(std::string const &name, std::string const &file = "woody.txt");
  ~Woody();
  virtual void	speak(const std::string &);
};


#endif /* !WOODY_H_ */
