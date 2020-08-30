/*
** Skat.h for Skat.h in /home/rayan/Piscine_CPP/cpp_d07a/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 10 15:43:28 2017 Rayan
** Last update Wed Jan 11 09:21:13 2017 Rayan
*/

#ifndef SKAT_H_
# define SKAT_H_

class Skat
{
 public:
  Skat(std::string const& name, int stimPaks);
  Skat(int stimPaks);
  Skat(std::string const& name);
  Skat();
  ~Skat();

 public:
  int&	stimPaks();
  const std::string& name();

 public:
  void shareStimPaks(int number, int& stock);
  void addStimPaks(unsigned int number);
  void useStimPaks();

 public:
  void status();

 private:
  int _stimPaks;
  std::string _name;
};

#endif /* SKAT_H_ */
