//
// Created by thenascrazy on 03/10/17.
//

#ifndef CPP_BABEL_PARSER_HH

#define CPP_BABEL_PARSER_HH
#define _SEPARATOR ' '
#define END_SEPARATOR '|'

#include <functional>
#include <sstream>
#include <algorithm>
#include <map>
#include <vector>
#include "ISocket.hh"
#include "User.hh"

class Parser
{
public:
    enum eRequestId
    {
        LASTNAME = 0,
        FIRSTNAME,
        BIRTHDAY,
        EMAIL,
        PSEUDO,
        STATUS,
        CALL,
        ACCEPT_CALL,
        REJECT_CALL,
        DECONNEXION,
        ADD_FRIEND,
        REMOVE_FRIEND,
        FRIEND_INFO,
        FRIENDS_LIST,
        TEXT,
        AUDIO,
        ID,
        CONNEXION,
        CREATE_ACCOUNT,
        FRIENDS_LIST_SEARCH,
    };

    enum eError
    {
        UNKNOWN_CONTACT = 20,
        UNKNOWN_CLIENT,
        OFFLINE,
        NETWORK_ERROR,
        AUTHENTIFICATION_ERROR,
        ACCOUNT_ALREADY_EXIST,
        UNKNOWN_INSTRUCTION,
        ALREADY_LOGGED
    };
private:
    std::map<Parser::eRequestId, void (Parser::*)(void)> _cmd;
    std::vector<std::string> _cmdlist;
    std::vector<User *> _userlist;
    int _fd;
    std::string _ip;
    ISocket *_os;
    IFSAbstract * _file;
    int _status;
public:
    Parser();
    ~Parser();
    int command(ISocket *, ISocket::Client, std::string);
    std::vector<std::string> deserialize(const std::string &);
    User* FindUser(int id);
    void lastName();
    void firstName();
    void Birthday();
    void Email();
    void Pseudo();
    void Status();
    void createAccount();
    void Call();
    void Accept_call();
    void Reject_call();
    void Deconnexion();
    void Add_friend();
    void Remove_friends();
    void Friend_info();
    void Friend_list();
    void Text();
    void Audio();
    void Id();
    void Connexion();
    void SearchFriends();
    std::vector<User *> getUserList() const;
    int backUpFile();
    int restoreFile();
    void MySend(int fd, const std::string &to_send);
};


#endif //CPP_BABEL_PARSER_HH
