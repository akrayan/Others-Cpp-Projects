//
// Federation.hh for Federation.hh in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 10:56:44 2017 Rayan
// Last update Wed Jan 11 09:37:00 2017 Rayan
//

#ifndef FEDERATION_HH_
# define FEDERATION_HH_

# include <iostream>
# include "WarpSystem.hh"

namespace		Federation
{
  class		Ship
  {
  private:
    int		_length;
    int		_width;
    std::string	_name;
    short		_maxWarp;
    WarpSystem::Core	*Core;

  public:
    Ship(int length, int width, std::string name);
    ~Ship();
    void	setupCore(WarpSystem::Core *moteur);
    void	checkCore();
  };

  namespace		Starfleet
  {
    class		Captain
    {
    private:
      std::string	_name;
      int		_age;
    public:
      Captain(std::string name);
      ~Captain();
      std::string	getName();
      int		getAge();
      void		setAge(int);
    };
    class		Ensign
    {
    private:
      std::string	_name;
    public:
      Ensign(std::string name);
      ~Ensign();
    };
    class		Ship
    {
    private:
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*Core;

    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void	setupCore(WarpSystem::Core *moteur);
      void	checkCore();
      void	promote(Captain *);
    };
  };
};

#endif /* FEDERATION_HH */
