/*
** parser.h for parser.h in /home/rayan/Piscine_CPP/cpp_d16/ex00
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Thu Jan 19 05:58:04 2017 Rayan
** Last update Thu Jan 19 08:40:24 2017 Rayan
*/

#ifndef PARSER_H_
# define PARSER_H_

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

class	Parser
{
  int			res;
  std::stack<int>	_operands;
  std::stack<char>	_operators;

 public:
  Parser();
  ~Parser();

  void	feed(const std::string &s);
  int	result() const;
  void	reset();

  void	parse(std::string);
  void  parse2(std::string s, int b, int e);
  void  getnb(std::string s, int &i);
  void  calc();
};

#endif /* PARSER_H_ */
