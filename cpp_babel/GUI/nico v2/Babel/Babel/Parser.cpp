#include "Parser.h"
#include <debugapi.h>

Parser::Parser()
{
	_status = Client::Status::OFFLINE;
	_cmd[LASTNAME] = &Parser::lastName;
	_cmd[FIRSTNAME] = &Parser::firstName;
	_cmd[BIRTHDAY] = &Parser::Birthday;
	_cmd[EMAIL] = &Parser::Email;
	_cmd[PSEUDO] = &Parser::Pseudo;
	_cmd[STATUS] = &Parser::Status;
	_cmd[CALL] = &Parser::Call;
	_cmd[ACCEPT_CALL] = &Parser::Accept_call;
	_cmd[REJECT_CALL] = &Parser::Reject_call;
	_cmd[DECONNEXION] = &Parser::Deconnexion;
	_cmd[ADD_FRIEND] = &Parser::Add_friend;
	_cmd[REMOVE_FRIEND] = &Parser::Remove_friends;
	_cmd[FRIEND_INFO] = &Parser::Friend_info;
	_cmd[FRIENDS_LIST] = &Parser::Friend_list;
	_cmd[TEXT] = &Parser::Text;
	_cmd[AUDIO] = &Parser::Audio;
	_cmd[ID] = &Parser::Id;
	_cmd[CONNEXION] = &Parser::Connexion;
	_cmd[CREATE_ACCOUNT] = &Parser::createAccount;
	_cmd[FRIENDS_LIST_SEARCH] = &Parser::SearchFriends;
}

Parser::~Parser()
{
}

int Parser::command(std::string buffer, Client *param)
{
	 _cmdlist = this->deserialize(buffer);

	 OutputDebugString(L"bite6");

	if (_cmd[static_cast< eRequestId > (std::stoi(_cmdlist[0]))])
		(this->*_cmd[static_cast< eRequestId > (std::stoi(_cmdlist[0]))])(param, _cmdlist);
	return (_status);
}

std::vector<std::string> Parser::deserialize(const std::string & buffer)
{
	std::vector<std::string> cmdList;
	std::istringstream ss(buffer);
	std::string token;

	while (std::getline(ss, token, static_cast<char>(END_SEPARATOR)))
	{
		//token.erase(std::remove(token.begin(), token.end(), END_SEPARATOR), token.end());
		token.erase(std::remove(token.begin(), token.end(), '\n'), token.end());
		cmdList.push_back(token);
	}
	return (cmdList);
}

void Parser::Connexion(Client *user, std::vector<std::string> _cmdlist)
{
	if (_cmdlist[0] == "17")
	{
		user->setStatus(Client::Status::ONLINE);
		_status = Client::Status::ONLINE;
		OutputDebugString(L"bite");
	}
	user->setStatus(Client::Status::OFFLINE);
	_status = Client::Status::OFFLINE;

	OutputDebugString(L"bite2");
}

void Parser::createAccount(Client *user, std::vector<std::string> _cmdlist)
{
	if (_cmdlist[0] == "18")
	{
		user->setStatus(Client::Status::ONLINE);

		_status = Client::Status::ONLINE;
	}
	_status = Client::Status::OFFLINE;
}

void Parser::lastName(Client *user, std::vector<std::string> _cmdlist)
{
	user->setLastName(_cmdlist[1]);
}

void Parser::firstName(Client *user, std::vector<std::string> _cmdlist)
{
	user->setFirstName(_cmdlist[1]);
}

void Parser::Birthday(Client *user, std::vector<std::string> _cmdlist)
{
	user->setBirthday(_cmdlist[1]);
}

void Parser::Email(Client *user, std::vector<std::string> _cmdlist)
{
	user->setEmail(_cmdlist[1]);
}

void Parser::Pseudo(Client *user, std::vector<std::string> _cmdlist)
{
	user->setPseudo(_cmdlist[1]);
}

void Parser::Status(Client *user, std::vector<std::string> _cmdlist)
{
	user->setStatus(std::stoi(_cmdlist[1]));
}

void Parser::Call(Client *user, std::vector<std::string> _cmdlist)
{
	Client::callin tmp;
	std::vector<Client::callin> tmp2 = user->getcalllist();
	std::vector<std::string> cmdList_space;
	std::string token;

	for (int i = 0; i < _cmdlist.size(); i++)
	{
		std::istringstream ss(_cmdlist[i]);
		while (std::getline(ss, token, static_cast<char>(_SEPARATOR)))
		{
			token.erase(std::remove(token.begin(), token.end(), END_SEPARATOR), token.end());
			token.erase(std::remove(token.begin(), token.end(), '\n'), token.end());
			cmdList_space.push_back(token);
		}
	}
	tmp.id = std::stoi(cmdList_space[1]);
	tmp.port = std::stoi(cmdList_space[2]);
	tmp.callstat = 1;
	tmp2.push_back(tmp);
	user->setcalllist(tmp2);
}

void Parser::Accept_call(Client *user, std::vector<std::string> _cmdlist)
{
	std::vector<Client::callin> tmp = user->getcalllist();
	std::vector<std::string> cmdList_space;
	std::string token;
	LPCWSTR help;

	for (int i = 0; i < _cmdlist.size(); i++)
	{
		std::istringstream ss(_cmdlist[i]);
		while (std::getline(ss, token, static_cast<char>(_SEPARATOR)))
		{
			token.erase(std::remove(token.begin(), token.end(), END_SEPARATOR), token.end());
			token.erase(std::remove(token.begin(), token.end(), '\n'), token.end());
			cmdList_space.push_back(token);
		}
	}
	
	for (int i = 0; i <= user->getcalllist().size(); i++)
	{
//		if (tmp[i].callstat = 1)
			tmp.push_back(Client::callin(cmdList_space[1]));
	}
	user->setcalllist(tmp);
}

void Parser::Reject_call(Client *user, std::vector<std::string> _cmdlist)
{
	/*
	std::vector<Client::callin> tmp;
	std::vector<Client::callin> tmp2;

	tmp = user->getcalllist();
	for (int i = 0; i < user->getcalllist().size(); i++)
	{
		if (std::stoi(_cmdlist[1]) == tmp[i].id)
			for (int e = 0; i < tmp.size(); e++)
			{
				if (std::stoi(_cmdlist[1]) != tmp[i].id)
					tmp2.push_back(tmp[i]);
			}
	}
	user->setcalllist(tmp2);
	*/
	std::vector<std::string> cmdList_space;
	std::string token;

	for (int i = 0; i < _cmdlist.size(); i++)
	{
		std::istringstream ss(_cmdlist[i]);
		while (std::getline(ss, token, static_cast<char>(_SEPARATOR)))
		{
			token.erase(std::remove(token.begin(), token.end(), END_SEPARATOR), token.end());
			token.erase(std::remove(token.begin(), token.end(), '\n'), token.end());
			cmdList_space.push_back(token);
		}
	}
}

void Parser::Deconnexion(Client *user, std::vector<std::string> _cmdlist)
{
	user->setStatus(Client::Status::OFFLINE);
	user->setId(-1);
}

void Parser::Add_friend(Client *user, std::vector<std::string> _cmdlist)
{
	std::vector<Client::Ifriend> tmp;
	std::vector<Client::Ifriend> tmp2;

	for (int i = 0; i < user->getFriendlist().size(); i++)
	{
		tmp[0].id = std::stoi(_cmdlist[1]);
		tmp [0].pseudo = _cmdlist[2];
		tmp2.push_back(tmp[0]);
	}
	user->setFriendlist(tmp);
}

void Parser::Remove_friends(Client *user, std::vector<std::string> _cmdlist)
{
	std::vector<Client::Ifriend> tmp;
	std::vector<Client::Ifriend> tmp2;

	tmp = user->getFriendlist();
	for (int i = 0; i < user->getFriendlist().size(); i++)
	{
		if (std::stoi(_cmdlist[1]) == tmp[i].id)
			for (int e = 0; i < tmp.size(); e++)
			{
				if (std::stoi(_cmdlist[1]) != tmp[i].id)
					tmp2.push_back(tmp[i]);
			}
	}
	user->setFriendlist(tmp2);
}

void Parser::Friend_info(Client *user, std::vector<std::string> _cmdlist)
{
	OutputDebugString(L"FriendInfo !   -");
	std::vector<Client::info> tmp = user->getInfofriend();
	/*if (!_cmdlist[1].empty())
	{
		QString test1 = _cmdlist[1].c_str();
		LPCWSTR test = (const wchar_t*)test1.utf16();
		OutputDebugStringW(test);
	}*/
	std::vector<std::string> cmdList_space;
	std::string token;

	for (int i  = 0; i < _cmdlist.size(); i++)
	{
		std::istringstream ss(_cmdlist[i]);
		while (std::getline(ss, token, static_cast<char>(_SEPARATOR)))
		{
			token.erase(std::remove(token.begin(), token.end(), END_SEPARATOR), token.end());
			token.erase(std::remove(token.begin(), token.end(), '\n'), token.end());
			cmdList_space.push_back(token);
		}
	}


	if(user->getId() == -1)
	{
		user->setId(std::stoi(cmdList_space[1]));
	}
	for (int i = 0; i < user->getInfofriend().size(); i++)
	{
		if (std::stoi(_cmdlist[1]) == tmp[i].id)
		{
			tmp[i].login = _cmdlist[2];
			tmp[i].email = _cmdlist[3];
			tmp[i].pseudo = _cmdlist[4];
			tmp[i].birthday = _cmdlist[5];
			tmp[i].firstname = _cmdlist[6];
			tmp[i].lastname = _cmdlist[7];
			tmp[i].status = std::stoi(_cmdlist[8]);
		}
	}
	user->setInfofriend(tmp);
}

void Parser::Friend_list(Client *user, std::vector<std::string> _cmdlist)
{
	//voir avec monfou
}

void Parser::Text(Client *user, std::vector<std::string> _cmdlist)
{
	//voir avec monfou
}

void Parser::Audio(Client *user, std::vector<std::string> _cmdlist)
{
	//voir avec monfou
}

void Parser::Id(Client *user, std::vector<std::string> _cmdlist)
{
	user->setId(std::stoi(_cmdlist[1]));
}

void Parser::SearchFriends(Client *user, std::vector<std::string> _cmdlist)
{
 //voir avec monfou
}