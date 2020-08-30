#ifndef UNIX_HH
#define UNIX_HH

# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string>
# include <sys/types.h>
# include <sys/socket.h>
# include <netdb.h>
# include <unistd.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <string.h>
#include <vector>
# include "../Common/ISocket.hh"

class UnixSocket : public ISocket
{
	public :
		UnixSocket();
		~UnixSocket();
		virtual int Init(int port);
		virtual int Accept();
		virtual int getSocket() const;
		virtual int closeFd(int);
		virtual std::vector<ISocket::Client> getClientList() const;
private:
		int			_fd;
		int			_fd_client;
		struct protoent		*_pe;
		std::string			_ip;
	    struct sockaddr_in	_s_in;
		struct sockaddr_in	_s_in_client;
		socklen_t		_s_in_size;
		std::vector<ISocket::Client> _clientlist;
};


#endif /* !UNIX_HH */
