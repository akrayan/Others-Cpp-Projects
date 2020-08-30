#ifndef WINSOCK_HH_
# define WINSOCK_HH_

# include "../Common/ISocket.hh"
# include <winsock2.h>
# include <windows.h>
# include <ws2tcpip.h>
# include <stdio.h>
# include <iostream>
# include <string>

class WinSocket : public ISocket
{
	public :
		WinSocket();
		~WinSocket();
		virtual int Init(int port);
		virtual int Accept();
		virtual int getSocket() const;
		virtual int closeFd(int);
		virtual std::vector<ISocket::Client> getClientList() const;
private:
		struct addrinfo _info_sock;
		struct addrinfo *_result;
		int _port;
		int _sock;
		std::vector<ISocket::Client> _clientlist;
};

#endif //WINSOCK_HH_
