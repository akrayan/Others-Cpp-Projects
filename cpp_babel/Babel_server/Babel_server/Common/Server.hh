//
// Created by thenascrazy on 06/10/17.
//

#ifndef CPP_BABEL_SERVER_HH
#define CPP_BABEL_SERVER_HH

#ifdef _WIN32
	# include "../Windows/WinSocket.hh"
#else
	# include "../Unix/UnixSocket.hh"
#endif

#include "MySocket.hh"
#include "Parser.hh"

class Server
{
public:
    Server(int port);
    ~Server();
    int loop();

private:
    int _port;
    MySocket _socket;
    ISocket *_os;
    std::string _buffer;
    Parser *_parser;
};


#endif //CPP_BABEL_SERVER_HH
