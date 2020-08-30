//
// main.cpp for main.cpp in /home/rayan/Piscine_CPP/cpp_d06
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Mon Jan  9 10:07:15 2017 Rayan
// Last update Tue Jan 10 09:17:15 2017 Rayan
//

#include <iostream>
#include <iomanip>
#include <fstream>

int			main(int ac, char **av)
{
  std::string		s;
  float			f;
  float			res;
  float			c;

  c = 5.0 / 9.0;
  std::cin >> f >> s;
  if (s == "Celsius")
    {
      res = (f / c) + 32;
      std::cout << std::setw(16) << std::fixed << std::setprecision(3) << res << std::setw(16) << " Fahrenheit" << std::endl;
    }
  else if (s == "Fahrenheit")
    {
      res = (f - 32) * c;
      std::cout << std::setw(16) << std::fixed << std::setprecision(3) << res << std::setw(16) << " Celsius" << std::endl;
    }
}
