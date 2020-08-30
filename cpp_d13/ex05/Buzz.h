/*
** Buzz.h for Buzz.h in /home/rayan/Piscine_CPP/cpp_d13/ex05
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 09:27:34 2017 Rayan
** Last update Tue Jan 17 09:27:35 2017 Rayan
*/


#ifndef BUZZ_H_
# define BUZZ_H_

# include "Toy.h"

class Buzz : public Toy
{
 public:
  Buzz(std::string const &name, std::string const &file = "buzz.txt");
  ~Buzz();
  virtual void	speak(const std::string &);
};

#endif /* !BUZZ_H_ */
