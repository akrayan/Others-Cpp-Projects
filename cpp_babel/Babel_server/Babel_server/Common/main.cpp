#include "Server.hh"

int main(int ac, char **av)
{

  if (ac != 2)
    {
      std::cout << "Usage : ./Babel_server port" << std::endl;
      return (0);
    }
    Server *server = new Server(atoi(av[1]));

    server->loop();
  return (0);
}
