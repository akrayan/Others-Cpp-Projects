//
// Parser.cpp for Parser.cpp in /home/rayan/Piscine_CPP/cpp_d16/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Thu Jan 19 04:57:38 2017 Rayan
// Last update Thu Jan 19 10:06:41 2017 Rayan
//

#include "Parser.h"

Parser::Parser() : res(0)
{
}

Parser::~Parser()
{
}

void	Parser::getnb(std::string s, int &i)
{
  size_t	n;
  std::string s2;

  n = i;
  while (n < s.size() && s[n] >= '0' && s[n] <= '9')
    n++;
  s2 = s.substr(i, n - i);
  this->_operands.push(atoi(s2.c_str()));
   i = n;
}

void	Parser::parse2(std::string s, int b, int e)
{
  while (b < e)
    {
      if (s[b] >= '0' && s[b] <= '9')
	getnb(s, b);
      if (s[b] == '+' || s[b] == '-' || s[b] == '*' || s[b] == '/' || s[b] == '%')
	this->_operators.push(s[b]);
      b++;
    }
}

void	Parser::parse(std::string s)
{
  size_t	b;
  int	e;
  std::string s2;

  if ((b = s.find_first_of('(')) != std::string::npos)
    {
      b++;
      e = s.find_last_of(')');
      s2 = s.substr(b, e - b);


      parse2(s, 0, b);
      parse2(s, e, s.size());

      parse(s2);
    }
  else
    {
      parse2(s, 0, s.size());
      b = this->_operands.top();
      this->_operands.pop();
      e = this->_operands.top();
      this->_operands.pop();
      this->_operands.push(b);
      this->_operands.push(e);
    }
}

void	Parser::calc()
{
  int r;

  r = this->_operands.top();
  this->_operands.pop();
  while (!this->_operators.empty())
    {
      if (this->_operators.top() == '+')
	r = r + this->_operands.top();
      else if (this->_operators.top() == '-')
	r = r - this->_operands.top();
      else if (this->_operators.top() == '*')
	r = r * this->_operands.top();
      else if (this->_operators.top() == '/')
	r = r / this->_operands.top();
      else if (this->_operators.top() == '%')
	r = r % this->_operands.top();
      this->_operands.pop();
      this->_operators.pop();
    }
  this->res = r + this->res;
}

void	Parser::feed(const std::string &s)
{
  parse(s);
  calc();
}

int	Parser::result() const
{
  return (this->res);
}

void	Parser::reset()
{
  this->res = 0;
}
