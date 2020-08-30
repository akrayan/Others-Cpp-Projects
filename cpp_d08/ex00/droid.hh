//
// droid.hh for droid.cpp in /home/rayan/Piscine_CPP/cpp_d08/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 11 09:54:14 2017 Rayan
// Last update Thu Jan 12 09:56:58 2017 Rayan
//

#ifndef DROID_HH_
# define DROID_HH_

class		Droid
{
  std::string Id;
  size_t Energy;
  size_t const Attack;
  size_t const Toughness;
  std::string *Status;

public:
  Droid(std::string id = "");
  Droid(Droid& d);
  ~Droid();

  bool operator==(Droid & d);
  bool operator!=(Droid & d);
  void operator<<(size_t & pile);

  std::string	getId();

  size_t	getEnergy();

  size_t	getAttack();

  size_t	getToughness();

  std::string	*getStatus();

  void		setId(size_t i);

  void		setEnergy(size_t i);

  void		setStatus(std::string *s);

};

std::ostream& operator<<(std::ostream& os, Droid const &d);

#endif
