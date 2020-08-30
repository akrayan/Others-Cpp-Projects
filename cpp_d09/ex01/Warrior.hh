//
// Warrior.hh for Warrior.hh in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 10:45:12 2017 Rayan
// Last update Fri Jan 13 09:42:32 2017 Rayan
//

#include "Character.hh"

#ifndef WARRIOR_HH_
# define WARRIOR_HH_

class	Warrior : public Character
{
protected:
  std::string   weaponName;
public:
  Warrior(const std::string &name, int lvl);
  ~Warrior();
  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
  void	RestorePower();
};
#endif /* !WARRIOR_HH_ */
