//
// Mage.hh for Mage.hh in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 11:17:46 2017 Rayan
// Last update Fri Jan 13 09:30:22 2017 Rayan
//

#ifndef MAGE_HH_
# define MAGE_HH_

#include "Character.hh"

class Mage : virtual public Character
{
public:
  Mage(const std::string &name, int lvl);
  ~Mage();
  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
  void	RestorePower();
};

#endif /* !MAGE_HH_ */
