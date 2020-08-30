#pragma once

#define _SEPARATOR ' '
#define END_SEPARATOR '|'

#include <functional>
#include <sstream>
#include <algorithm>
#include <map>
# include <vector>
# include <iostream>
# include <vector>
# include "SocketClient.h"

class Client
{
public:
	struct callin
	{
		callin(std::string enter_ip = "") {
			ip = enter_ip;
		}
		int id;
		std::string ip;
		int port;
		int callstat;
	};
	struct Ifriend
	{
		int id;
		std::string pseudo;
	};
	struct info
	{
		int id;
		std::string email;
		std::string login;
		std::string pseudo;
		std::string birthday;
		std::string firstname;
		std::string lastname;
		int status;
	};
	enum Status {
		OFFLINE = 0,
		ONLINE,
		AWAY,
		BUSY,
		END
	};
	void setFd(const int &);
	void connexion(Client, SocketClient*);
	void create(Client user, SocketClient *clientInfo);
	void setId(const int &);
	void setLastName(const std::string &_lastname);
	void setFirstName(const std::string &_firstname);
	void setBirthday(const std::string &_birthday);
	void setEmail(const std::string &_email);
	void setPseudo(const std::string &_pseudo);
	void setLogin(const std::string &_login);
	void setPassword(const std::string &_password);
	void setStatus(int _status);
	void setFriendlist(std::vector<Client::Ifriend> friendId);
	void setIp(const std::string &_ip);
	void setcalllist(std::vector<Client::callin> _calllist);
	void setInfofriend(std::vector<Client::info> friendId);
	
	std::vector<Client::info> getInfofriend() const;
	const std::string &getLastName() const;
	const std::string &getFirstName() const;
	const std::string &getBirthday() const;
	const std::string &getEmail() const;
	const std::string &getPseudo() const;
	const std::string &getLogin() const;
	const std::string &getPassword() const;
	int getStatus() const;
	int getFd() const;
	int getId() const;
	std::vector<Client::Ifriend> getFriendlist() const;
	const std::string &getIp() const;
	std::vector<callin> getcalllist() const;

	void lastname(Client user, SocketClient *clientInfo);
	void firstname(Client user, SocketClient *clientInfo);
	void birthday(Client user, SocketClient *clientInfo);
	void email(Client user, SocketClient *clientInfo);
	void pseudo(Client user, SocketClient *clientInfo);
	void status(Client user, SocketClient *clientInfo);
	void call(Client user, SocketClient *clientInfo, int Friendid, int port);
	void accept_call(Client user, SocketClient *clientInfo, int Friendid);
	void reject_call(Client user, SocketClient *clientInfo, int Friendid);
	void deconnexion(Client user, SocketClient *clientInfo);
	void add_friend(Client user, SocketClient *clientInfo, int Friendid);
	void remove_friend(Client user, SocketClient *clientInfo, int Friendid);
	void friend_info(Client user, SocketClient *clientInfo, int Friendid);
	void friend_list(Client user, SocketClient *clientInfo);
	void texte(Client user, SocketClient *clientInfo, int Friendid, int texte_size, std::string texte);
	void audio(Client user, SocketClient *clientInfo, int Friendid, int audio_size, std::string audio);
	void id(Client user, SocketClient *clientInfo);
	void friend_list_search(Client user, SocketClient *clientInfo, std::string client_pseudo, int audio_size, std::string audio);

	Client(const std::string & = "", const std::string & = "");
	~Client();

private:
	std::string _lastname;
	std::string _firstname;
	std::string _birthday;
	std::string _email;
	std::string _pseudo;
	std::string _login;
	std::string _password;
	int         _status;
	int         _fd;
	int         _id;
	std::vector <callin> _calllist;
	std::vector <Ifriend> _friendlist;
	std::vector <info> _infofriend;
	std::string         _ip;

};


//#endif //CLIENT_H
