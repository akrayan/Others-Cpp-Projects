//
// main.cpp for main.cpp in /home/rayan/Piscine_CPP/cpp_d06
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Mon Jan  9 10:07:15 2017 Rayan
// Last update Tue Jan 10 09:13:30 2017 Rayan
//

#include <iostream>
#include <fstream>
#include <string>

bool			is_empty(std::ifstream&	file)
{
  return (file.peek() == std::ifstream::traits_type::eof());
}

void			raw(char *fname)
{
  std::filebuf      	*b;
  std::string      	err;
  std::ifstream	file(fname, std::ios::in);

  if (!file)
    {
      err = "my_cat : <";
      err = err + fname + ">: No such file or directory";
      std::cerr << err << std::endl;
      return ;
    }
  if (!is_empty(file))
    {
      b = file.rdbuf();
      std::cout << b;
    }
  file.close();
}

int			main(int ac, char **av)
{
  int	i;

  if (ac > 1)
    {
      i = 0;
      while (av[++i] != NULL)
	raw(av[i]);
    }
  else
    std::cout << "my_cat: Usage: ./my_cat file [...]" << std::endl;
}
