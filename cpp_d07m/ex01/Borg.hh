//
// Borg.hh for Borg.hh in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 16:37:34 2017 Rayan
// Last update Wed Jan 11 09:33:11 2017 Rayan
//

#ifndef BORG_HH_
# define BORG_HH_

# include "Federation.hh"

namespace	Borg
{
  class		Ship
  {
  private:
    int		_side;
    short	_maxWarp;
    WarpSystem::Core	*Core;
  public:
    Ship();
    ~Ship();
    void	setupCore(WarpSystem::Core *moteur);
    void	checkCore();
  };
};

#endif /* !BORG_HH_ */
