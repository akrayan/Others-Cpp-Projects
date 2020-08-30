//
// Paladin.hh for Paladin.hh in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 14:57:15 2017 Rayan
// Last update Fri Jan 13 09:36:07 2017 Rayan
//

#ifndef PALADIN_HH_
# define PALADIN_HH_

# include "Warrior.hh"
# include "Priest.hh"

class	Paladin : public Warrior, public Priest
{
public:
  Paladin(const std::string &, int);
  ~Paladin();
  void	Heal();
  void	RestorePower();
  int	RangeAttack();
  int	CloseAttack();
  int	Intercept();
};


#endif /* :PALADIN_HH_ */
