/*#ifndef PARSER_H
#define PARSER_H*/
#pragma once

#include <functional>
#include <sstream>
#include <algorithm>
#include <Windows.h>
#include <map>
#include "SocketClient.h"
#include "Client.h"
#include "Settings.h"

class Client;

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
	std::map<eRequestId, void (Parser::*)(Client *, std::vector<std::string>)> _cmd;
	std::vector<std::string> _cmdlist;
	std::vector<Client *> _userlist;
	int _fd;
	std::string _ip;
	int _status;
public:
	Parser();
	~Parser();
	int command(std::string, Client *);
	std::vector<std::string> deserialize(const std::string &);
	void lastName(Client *, std::vector<std::string>);
	void firstName(Client *, std::vector<std::string>);
	void Birthday(Client *, std::vector<std::string>);
	void Email(Client *, std::vector<std::string>);
	void Pseudo(Client *, std::vector<std::string>);
	void Status(Client *, std::vector<std::string>);
	void createAccount(Client *, std::vector<std::string>);
	void Call(Client *, std::vector<std::string>);
	void Accept_call(Client *, std::vector<std::string>);
	void Reject_call(Client *, std::vector<std::string>);
	void Deconnexion(Client *, std::vector<std::string>);
	void Add_friend(Client *, std::vector<std::string>);
	void Remove_friends(Client *, std::vector<std::string>);
	void Friend_info(Client *, std::vector<std::string>);
	void Friend_list(Client *, std::vector<std::string>);
	void Text(Client *, std::vector<std::string>);
	void Audio(Client *, std::vector<std::string>);
	void Id(Client *, std::vector<std::string>);
	void Connexion(Client *, std::vector<std::string>);
	void SearchFriends(Client *, std::vector<std::string>);
};


//#endif //PARSER_H
