//
// WarpSystem.hh for WarpSystem.hh in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 09:57:24 2017 Rayan
// Last update Wed Jan 11 09:36:41 2017 Rayan
//

#ifndef WARPSYSTEM_HH_
# define WARPSYSTEM_HH_

namespace		WarpSystem
{
  class			QuantumReactor
  {
  private:
    bool		_stability;

  public:
    QuantumReactor();
    ~QuantumReactor();

    bool	isStable();
    void	setStability(bool);
  };

  class			Core
  {
  private:
    QuantumReactor *_coreReactor;

  public:
    Core(QuantumReactor *coreReactor);
    ~Core();
    QuantumReactor *checkReactor();
  };
};

#endif /* !WARPSYSTEM_HH_ */
