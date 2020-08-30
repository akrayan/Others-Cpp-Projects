//
// WarpSystem.hh for WarpSystem.hh in /home/rayan/Piscine_CPP/cpp_d07m/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 10:27:19 2017 Rayan
// Last update Tue Jan 10 11:14:03 2017 Rayan
//

#ifndef WARPSYSTEM_HH_
# define WARPSYSTEM_HH_

namespace		WarpSystem
{
  class			QuantumReactor
  {
    bool		_stability;

  public:
    QuantumReactor();
    ~QuantumReactor();

    bool	isStable();
    void	setStability(bool b);
  };

  class			Core
  {
    QuantumReactor *_coreReactor;

  public:
    Core(QuantumReactor *cr);
    ~Core();
    QuantumReactor *checkReactor();
  };
};

#endif
