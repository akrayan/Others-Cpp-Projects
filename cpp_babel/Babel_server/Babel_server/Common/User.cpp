//
// Created by thenascrazy on 02/10/17.
//

#include "User.hh"

User::User(const std::string &login, const std::string &password) : _login(login), _password(password)
{
    _lastname = "";
    _firstname = "";
    _birthday = "";
    _email = "";
    _pseudo = _login;
    _status = OFFLINE;
    _friendlist.clear();
}

User::~User()
{

}

const std::string &User::getLastName() const {
    return _lastname;
}

const std::string &User::getFirstName() const {
    return _firstname;
}

const std::string &User::getBirthday() const {
    return _birthday;
}

const std::string &User::getEmail() const {
    return _email;
}

const std::string &User::getPseudo() const {
    return _pseudo;
}

const std::string &User::getLogin() const {
    return _login;
}

const std::string &User::getPassword() const
{
    return _password;
}

int User::getStatus() const {
    return _status;
}

int User::getFd() const
{
    return _fd;
}

int User::getId() const
{
    return _id;
}

void User::setId(const int &id)
{
    _id = id;
}

void User::setFd(const int &fd) {
    _fd = fd;
}

void User::setLastName(const std::string &_lastname) {
    User::_lastname = _lastname;
}

void User::setFirstName(const std::string &_firstname) {
    User::_firstname = _firstname;
}

void User::setBirthday(const std::string &_birthday) {
    User::_birthday = _birthday;
}

void User::setEmail(const std::string &_email) {
    User::_email = _email;
}

void User::setPseudo(const std::string &_pseudo) {
    User::_pseudo = _pseudo;
}

void User::setLogin(const std::string &_login) {
    User::_login = _login;
}

void User::setPassword(const std::string &_password) {
    User::_password = _password;
}

void User::setStatus(int _status) {
    User::_status = _status;
}

std::vector<int> User::getFriendlist() const {
    return _friendlist;
}

void User::setFriendlist(int friendId)
{
    _friendlist.push_back(friendId);
}

const std::string &User::getIp() const {
    return _ip;
}

void User::setIp(const std::string &_ip) {
    User::_ip = _ip;
}

void User::EraseFriendList(User *user, int friendId)
{
    for(int i = 0; i < user->getFriendlist().size(); i++)
    {
        if (user->getFriendlist()[i] == friendId)
        {
            _friendlist.erase(_friendlist.begin() + i);
            return;
        }
    }
    std::cout << "Client " << _id << "don't have this friend" << std::endl;
}
