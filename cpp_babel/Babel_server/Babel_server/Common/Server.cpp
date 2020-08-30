//
// Created by thenascrazy on 06/10/17.
//

#include "Server.hh"

Server::Server(int port) : _port(port)
{
    #ifdef _WIN32
        _os = new WinSocket;
    #else
        _os = new UnixSocket;
    #endif
    MySocket _socket;
    _os->Init(port);
    _parser = new Parser;
}

Server::~Server()
{
    delete[] _os;
    delete[] _parser;
}

int Server::loop()
{

    int ret;
    int status = 0;

    while (status == 0) {
       status = _socket.Select(_os->getSocket(), _os->getClientList());
        fd_set fds = _socket.getFdSets(MySocket::READ);
        if (_socket.isActionInSocket(_os->getSocket(), &fds)) {
			status = _os->Accept();
			std::cout << "Client " << _os->getSocket() << " connected" << std::endl;
        }
        for (int i = 0; i < _os->getClientList().size(); i++) {
            if (_socket.isActionInSocket(_os->getClientList()[i].fd, &fds)) {
                if ((ret = _socket.Receive(_os->getClientList()[i].fd, _buffer)) <= 0) {
                    status = _os->closeFd(_os->getClientList()[i].fd);
                }
                else
                    status = _parser->command(_os, _os->getClientList()[i], _buffer);
            }
        }
    }
    return (status);
}