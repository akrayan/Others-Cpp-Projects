//
// Priest.hh for Priest.hh in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 12:37:20 2017 Rayan
// Last update Fri Jan 13 09:43:04 2017 Rayan
//

#ifndef PRIEST_HH_
# define PRIEST_HH_

# include "Mage.hh"

class Priest : public Mage
{
public:
  Priest(const std:: string &name, int lvl);
  ~Priest();
  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
  void	RestorePower();
};

#endif /* !PRIEST_HH_ */
