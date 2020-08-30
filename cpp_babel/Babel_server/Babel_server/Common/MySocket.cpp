#include "MySocket.hh"

MySocket::MySocket()
{

}

MySocket::~MySocket()
{
}

int MySocket::getMaxFds(int fd, std::vector<ISocket::Client> clientList)
{
  int	max_fd;
  std::vector<ISocket::Client>::iterator it;

  max_fd = fd;
  it = clientList.begin();
  while (it != clientList.end())
    {
      if ((*it).fd > max_fd)
	max_fd = (*it).fd;
      it++;
    }
  return (max_fd + 1);
}

void MySocket::initSelect(int fd, std::vector<ISocket::Client> clientList, FD_sets_type set)
{
  std::vector<ISocket::Client>::iterator it;

  FD_ZERO(&_fd_sets[set]);
  FD_SET(fd, &_fd_sets[set]);

  it = clientList.begin();
  while (it != clientList.end())
    {
      FD_SET((*it).fd, &_fd_sets[set]);
      it++;
    }
}

bool MySocket::isActionInSocket(int fd, fd_set *fd_sets)
{
    return (FD_ISSET(fd, fd_sets));
}

fd_set MySocket::getFdSets(FD_sets_type type) const
{
    return (_fd_sets[type]);
}

int MySocket::Receive(int fd, std::string &buffer)
{
    char buf[512];
    int ret;

    ret = static_cast<int>(recv(fd, buf, 512, 0));
    buf[ret] = 0;
    buffer = std::string(buf);
    return (ret);
}

int MySocket::Select(int fd, std::vector<ISocket::Client> clientList)
{
    initSelect(fd, clientList, READ);
    if (select(getMaxFds(fd, clientList), &_fd_sets[READ], NULL, NULL, NULL) == -1)
        return (-1);
  return (0);
}