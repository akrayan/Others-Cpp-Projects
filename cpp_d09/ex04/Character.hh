//
// Character.hh for Character.hh in /home/rayan/Piscine_CPP/cpp_d09/ex04
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Fri Jan 12 09:45:49 2017 Rayan
// Last update Fri Jan 13 09:27:02 2017 Rayan
//


#ifndef CHARACTER_HH_
# define CHARACTER_HH_

# include <iostream>

class Character
{
public:
  Character(const std::string &, int);
  ~Character();
  const std::string &getName() const;
  int	getLvl() const;
  int	getPv() const;
  int	getPower() const;
  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
  void	RestorePower();
  void	TakeDamage(int);

typedef enum	AttackRange
    {
      CLOSE,
      RANGE
    }		AttackRange;
  AttackRange		Range;
protected:
  const std::string	_name;
  int			_lvl;
  int			_pv;
  int			_power;
  int			_strength;
  int			_stamina;
  int			_intelligent;
  int			_spirit;
  int			_agility;
};

#endif /* !CHARACTER_HH_ */
