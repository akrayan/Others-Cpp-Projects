//
// Hunter.hh for Hunter.hh in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 16:14:30 2017 Rayan
// Last update Fri Jan 13 09:37:34 2017 Rayan
//

#ifndef HUNTER_HH_
#define HUNTER_HH_

#include "Character.hh"
#include "Warrior.hh"

class	Hunter : public Warrior
{
public:
  Hunter(const std::string &, int);
  ~Hunter();

  int	CloseAttack();
  int	RangeAttack();
  void	RestorePower();
};

#endif /* !HUNTER_HH_ */
