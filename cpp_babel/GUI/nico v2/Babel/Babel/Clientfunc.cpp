#include "Client.h"


void	Client::connexion(Client user, SocketClient	*clientInfo)
{
	std::string s;
	//s = std::to_string(17) + _SEPARATOR + user._login + _SEPARATOR + user._password + END_SEPARATOR;
	s = std::to_string(17) + _SEPARATOR + user._login + _SEPARATOR + user._password + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::create(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(18) + _SEPARATOR + user._login + _SEPARATOR + user._password + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::lastname(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(0) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + user.getLastName() + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::firstname(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(1) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + user.getFirstName() + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::birthday(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(2) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + user.getBirthday() + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::email(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(3) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + user.getEmail() + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::pseudo(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(4) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + user.getPseudo() + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::status(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(5) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(user.getStatus()) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::call(Client user, SocketClient *clientInfo, int Friendid, int port)
{
	std::string s;
	s = std::to_string(6) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(Friendid) + _SEPARATOR + std::to_string(port) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::accept_call(Client user, SocketClient *clientInfo, int Friendid)
{
	std::string s;
	s = std::to_string(7) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(Friendid) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::reject_call(Client user, SocketClient *clientInfo, int Friendid)
{
	std::string s;
	s = std::to_string(8) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(Friendid) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::deconnexion(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(9) + _SEPARATOR + std::to_string(user.getId()) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::add_friend(Client user, SocketClient *clientInfo, int Friendid)
{
	std::string s;
	s = std::to_string(10) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(Friendid) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::remove_friend(Client user, SocketClient *clientInfo, int Friendid)
{
	std::string s;
	s = std::to_string(11) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(Friendid) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::friend_info(Client user, SocketClient *clientInfo, int Friendid)
{
	std::string s;
	s = std::to_string(12) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(Friendid) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::friend_list(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(13) + _SEPARATOR + std::to_string(user.getId()) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::texte(Client user, SocketClient *clientInfo, int Friendid, int texte_size, std::string texte)
{
	std::string s;
	s = std::to_string(14) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(Friendid) + _SEPARATOR + std::to_string(texte_size) + _SEPARATOR + texte + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::audio(Client user, SocketClient *clientInfo, int Friendid, int audio_size, std::string audio)
{
	std::string s;
	s = std::to_string(15) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + std::to_string(Friendid) + _SEPARATOR + std::to_string(audio_size) + _SEPARATOR + audio + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::id(Client user, SocketClient *clientInfo)
{
	std::string s;
	s = std::to_string(16) + _SEPARATOR + std::to_string(user.getId()) + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}

void Client::friend_list_search(Client user, SocketClient *clientInfo, std::string client_pseudo, int audio_size, std::string audio)
{
	std::string s;
	s = std::to_string(19) + _SEPARATOR + std::to_string(user.getId()) + _SEPARATOR + client_pseudo + END_SEPARATOR;
	clientInfo->soc.write(QString::fromStdString(s).toUtf8());
}