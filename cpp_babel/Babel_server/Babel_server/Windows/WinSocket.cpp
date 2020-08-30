#include "WinSocket.hh"
//#include <Wdbgexts.h>
#pragma comment(lib, "Ws2_32.lib")

WinSocket::WinSocket()
{

}

WinSocket::~WinSocket()
{
	WSACleanup();
}

int WinSocket::Init(int port)
{
	WSAData wsadata;
	WSAStartup(MAKEWORD(2, 0), &wsadata);
	std::cout << "WSAStartup Good" << std::endl;

	ZeroMemory(&(_info_sock), sizeof(_info_sock));
	_info_sock.ai_family = AF_INET;
	_info_sock.ai_socktype = SOCK_STREAM;
	_info_sock.ai_protocol = getprotobyname("TCP")->p_proto;
	_info_sock.ai_flags = AI_PASSIVE;
	_port = port;
	std::string str_port = std::to_string(port);
	if (getaddrinfo(NULL, (char *)str_port.c_str(), &(this->_info_sock), &(this->_result)) != 0)
	{
		WSACleanup();
		std::cout << "Error getaddrinfo" << std::endl;
		return (-1);
	}
	std::cout << "getaddrinfo start" << std::endl;
	_sock = socket(_result->ai_family, _result->ai_socktype, _result->ai_protocol);
	if (_sock == SOCKET_ERROR)
	{
		std::cout << "socket Error" << std::endl;
		return (-1);
	}
	std::cout << "Socket start" << std::endl;
	if (bind(_sock, _result->ai_addr, _result->ai_addrlen) == SOCKET_ERROR)
	{
		std::cout << "Bind error" << std::endl;
		return (-1);
	}
	std::cout << "Bind ok" << std::endl;

	if (listen(_sock, SOMAXCONN) == SOCKET_ERROR)
	{
		std::cout << "Listen error" << std::endl;
		return (-1);
	}
	std::cout << "Listen ok" << std::endl;
	return (0);
}

int WinSocket::Accept()
{
	int fd_client = INVALID_SOCKET;
	sockaddr_in addr = { 0 };
	int addr_size;
	char buff[INET6_ADDRSTRLEN] = { 0 };
	std::string ip;
	ISocket::Client tmp;

	addr_size = sizeof(struct sockaddr);
	if ((fd_client = accept(this->_sock, (sockaddr *)&addr, &addr_size)) == INVALID_SOCKET)
	{
		std::cout << "Accept error" << std::endl;
		return (-1);
	}
	inet_ntop(addr.sin_family, (void*)&(addr.sin_addr), buff, INET6_ADDRSTRLEN);
	ip = std::string(buff);
	tmp.fd = fd_client;
	tmp.ip = ip;
	_clientlist.push_back(tmp);
	std::cout << "ip client: " << buff << std::endl;
	send(fd_client, "Hello world!\r\n", 14, 0);
	return (0);
}

int WinSocket::getSocket() const
{
	return _sock;
}

int WinSocket::closeFd(int fd)
{
  if (closesocket(fd) != 0)
    return (-1);
  for (int i = 0; i < _clientlist.size(); i++)
  {
	  if (_clientlist[i].fd == fd)
		  _clientlist.erase(_clientlist.begin() + i);
  }
  return (0);
}

std::vector<ISocket::Client> WinSocket::getClientList() const
{
	return _clientlist;
}