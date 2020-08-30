#include "Client.h"

Client::Client(const std::string &login, const std::string &password) : _login(login), _password(password)
{
	_id = -1;
	_lastname = "";
	_firstname = "";
	_birthday = "";
	_email = "";
	_pseudo = _login;
	_status = OFFLINE;
	_friendlist.clear();
	_calllist.clear();
	_infofriend.clear();
}

Client::~Client()
{

}

const std::string &Client::getLastName() const {
	return _lastname;
}

const std::string &Client::getFirstName() const {
	return _firstname;
}

const std::string &Client::getBirthday() const {
	return _birthday;
}

const std::string &Client::getEmail() const {
	return _email;
}

const std::string &Client::getPseudo() const {
	return _pseudo;
}

const std::string &Client::getLogin() const {
	return _login;
}

const std::string &Client::getPassword() const
{
	return _password;
}

int Client::getStatus() const {
	return _status;
}

int Client::getFd() const
{
	return _fd;
}

int Client::getId() const
{
	return _id;
}

void Client::setId(const int &id)
{
	_id = id;
}

void Client::setFd(const int &fd) {
	_fd = fd;
}

void Client::setLastName(const std::string &_lastname) {
	Client::_lastname = _lastname;
}

void Client::setFirstName(const std::string &_firstname) {
	Client::_firstname = _firstname;
}

void Client::setBirthday(const std::string &_birthday) {
	Client::_birthday = _birthday;
}

void Client::setEmail(const std::string &_email) {
	Client::_email = _email;
}

void Client::setPseudo(const std::string &_pseudo) {
	Client::_pseudo = _pseudo;
}

void Client::setLogin(const std::string &_login) {
	Client::_login = _login;
}

void Client::setPassword(const std::string &_password) {
	Client::_password = _password;
}

void Client::setStatus(int _status) {
	Client::_status = _status;
}

std::vector<Client::Ifriend> Client::getFriendlist() const {
	return _friendlist;
}

void Client::setFriendlist(std::vector<Client::Ifriend> friendId)
{
	Client::_friendlist = friendId;
}

std::vector<Client::info> Client::getInfofriend() const {
	return _infofriend;
}

void Client::setInfofriend(std::vector<Client::info> friendId)
{
	Client::_infofriend = friendId;
}

const std::string &Client::getIp() const {
	return _ip;
}

void Client::setIp(const std::string &_ip) {
	Client::_ip = _ip;
}

std::vector<Client::callin> Client::getcalllist() const {
	return _calllist;
}

void Client::setcalllist(std::vector<Client::callin> _calllist)
{
	Client::_calllist = _calllist;
}