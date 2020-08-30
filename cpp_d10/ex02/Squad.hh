//
// Squad.hh for Squad.hh in /home/rayan/Piscine_CPP/cpp_d10/ex02
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 13 11:46:51 2017 Rayan
// Last update Fri Jan 13 11:56:01 2017 Rayan
//

#ifndef SQUAD_HH_
# define SQUAD_HH_

class	ISquad
{
public:
  virtual ~ISquad() {}
  virtual int getCount() const = 0;
  virtual ISpaceMarine *getUnit(int) = 0;
  virtual int push(ISpaceMarine*) = 0;
}

#endif
