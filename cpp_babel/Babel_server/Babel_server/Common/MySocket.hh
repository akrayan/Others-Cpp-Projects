#ifndef MY_SOCKET_HH_
# define MY_SOCKET_HH_

# include <iostream>
# include <vector>
# include "ISocket.hh"


class MySocket
{
public:
    enum FD_sets_type
    {
        READ = 0,
        WRITE = 1
    };
  MySocket();
  ~MySocket();
  int Select(int, std::vector<ISocket::Client>);
  void initSelect(int, std::vector<ISocket::Client>, FD_sets_type);
  int getMaxFds(int, std::vector<ISocket::Client>);
  bool isActionInSocket(int, fd_set *);
  fd_set getFdSets(FD_sets_type) const;
  int Receive(int, std::string&);
    /*int newClient();
    int newAction(FD_sets_type set);*/
private:
    fd_set _fd_sets[2];
};

#endif //MY_SOCKET_HH_
