#ifndef ISOCKET_HPP_
# define ISOCKET_HPP_

# include <iostream>
# include <vector>
#ifdef _WIN32
	#include <Winsock2.h>
	#include "../Windows/CFSWindows.hh"

#else
	#include <sys/types.h>
	#include <sys/socket.h>
	#include <sys/select.h>
	#include "../Unix/CFSUnix.hh"
#endif

class ISocket
{
public :
	struct Client
	{
		int		fd;
		std::string ip;
	};
	virtual ~ISocket() {};
	virtual int Init(int port) = 0;
	virtual int Accept() = 0;
	virtual int getSocket() const = 0;
	virtual int closeFd(int) = 0;
	virtual std::vector<Client> getClientList() const = 0;
};

#endif //ISOCKET_HPP_
