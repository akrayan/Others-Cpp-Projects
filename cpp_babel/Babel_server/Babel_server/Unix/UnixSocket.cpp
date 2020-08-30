#include "UnixSocket.hh"

UnixSocket::UnixSocket()
{
    _clientlist.clear();
}

UnixSocket::~UnixSocket()
{
}

int	UnixSocket::Init(int port)
{
  _s_in_size = sizeof(_s_in_client);
  if (!(_pe = getprotobyname("TCP")))
    return (1);
  _s_in.sin_family = AF_INET;
  _s_in.sin_port = htons(port);
  _s_in.sin_addr.s_addr = INADDR_ANY;
  if ((_fd = socket(AF_INET, SOCK_STREAM, _pe->p_proto)) == -1)
    return (1);
  if (bind(_fd, (const struct sockaddr *)&_s_in, sizeof(_s_in)) == -1 || listen(_fd, 42) == -1)
    {
      if (close(_fd) == -1)
	return (1);
      return (1);
    }
  return (0);
}

int	UnixSocket::Accept()
{
  char *ip;
  ISocket::Client tmp;

  if ((_fd_client = accept(_fd, (struct sockaddr *) &_s_in_client, &_s_in_size)) == -1)
    return (-1);
  ip = inet_ntoa(_s_in_client.sin_addr);
  _ip = std::string(ip);
  tmp.fd = _fd_client;
  tmp.ip = _ip;
  _clientlist.push_back(tmp);
  dprintf(_fd_client, "Welcome to Babel's server\n");
  return (0);
}

int	UnixSocket::getSocket() const
{
  return (_fd);
}

int	UnixSocket::closeFd(int fd)
{
  if (close(fd) == -1)
    return (-1);
  for (int i = 0; i < _clientlist.size(); i++)
  {
    if (_clientlist[i].fd == fd)
      _clientlist.erase(_clientlist.begin() + i);
  }
  return (0);
}

std::vector<UnixSocket::Client> UnixSocket::getClientList() const
{
    return _clientlist;
}
