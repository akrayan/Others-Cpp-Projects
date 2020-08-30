//
// Federation.hh for Federation.hh in /home/rayan/Piscine_CPP/cpp_d07m/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 09:59:03 2017 Rayan
// Last update Tue Jan 10 16:25:40 2017 Rayan
//

#ifndef FEDERATION_HH_
# define FEDERATION_HH_

# include <iostream>
# include "WarpSystem.hh"

namespace		Federation
{
  class		Ship
  {
    int		_length;
    int		_width;
    std::string	_name;
    short		_maxWarp;
    WarpSystem::Core	*Core;

  public:
    Ship(int length, int width, std::string name);
    ~Ship();
    void	setupCore(WarpSystem::Core *cr);
    void	checkCore();
  };

  namespace		Starfleet
  {
    class		Ship
    {
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*Core;

    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void	setupCore(WarpSystem::Core *cr);
      void	checkCore();
    };
  };
};

#endif /* FEDERATION_HH */
