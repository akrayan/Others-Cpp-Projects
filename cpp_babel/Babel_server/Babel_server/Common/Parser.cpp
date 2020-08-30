//
// Created by thenascrazy on 03/10/17.
//

#include "Parser.hh"

Parser::Parser()
{
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

    #ifdef _WIN32
        _file = new CFSWindows;
    #else
        _file = new CFSUnix;
    #endif
    _userlist.clear();
    //this->restoreFile();
}

Parser::~Parser()
{
    delete[] _file;
}

int Parser::command(ISocket *Os, ISocket::Client client, std::string buffer)
{
    User *user = nullptr;

    _os = Os;
    _fd = client.fd;
    _ip = client.ip;
    _cmdlist = this->deserialize(buffer);
    _status = 0;

    for (int i = 0; i != _cmdlist.size(); i++)
        std::cout << "--cmdlist[" << i << "] : " << _cmdlist[i] << std::endl;
    if (std::stoi(_cmdlist[0]) > 18)
    {
        std::stringstream ss;
        ss << std::to_string(eError::UNKNOWN_INSTRUCTION) << _SEPARATOR << "Bad request." << END_SEPARATOR;
        std::string to_send = ss.str();
        MySend(_fd, to_send);
        return (1);
    }
    if (std::stoi(_cmdlist[0]) < 17) {
        user = FindUser(std::stoi(_cmdlist[1]));
    }
    if (user) {
        user->setFd(_fd);
        user->setIp(_ip);
    }
    if (_cmd[static_cast< eRequestId > (std::stoi(_cmdlist[0]))])
        (this->*_cmd[static_cast< eRequestId > (std::stoi(_cmdlist[0]))])();
    return (_status);
}

std::vector<std::string> Parser::deserialize(const std::string & buffer)
{
    std::vector<std::string> cmdList;
    std::istringstream ss(buffer);
    std::string token;

    while(std::getline(ss, token, static_cast<char>(_SEPARATOR)))
    {
        token.erase(std::remove(token.begin(), token.end(), END_SEPARATOR), token.end());
        token.erase(std::remove(token.begin(), token.end(), '\n'), token.end());
        cmdList.push_back(token);
    }
    return (cmdList);
}

User* Parser::FindUser(int id)
{
    std::vector<User *>::iterator it;

    for(int i = 0; i < _userlist.size(); i++)
    {
        if (_userlist[i]->getId() == id)
            return (_userlist[i]);
    }
    return (nullptr);
}

void Parser::lastName()
{
    User *user;
    user = FindUser(std::stoi(_cmdlist[1]));
    if (!user)
        return;

    user->setLastName(_cmdlist[2]);

    std::stringstream ss;
    ss << std::to_string(eRequestId::LASTNAME) << _SEPARATOR << _cmdlist[2] << END_SEPARATOR;
    std::string to_send = ss.str();
    MySend(user->getFd(), to_send);
    std::cout << "User "<< user->getId() <<" change his lastname to "<< user->getLastName() << std::endl;
}

void Parser::firstName()
{
    User *user;

    user = FindUser(std::stoi(_cmdlist[1]));
    if (!user)
        return ;

    user->setFirstName(_cmdlist[2]);
    std::stringstream ss;
    ss << std::to_string(eRequestId::FIRSTNAME) << _SEPARATOR << _cmdlist[2] << END_SEPARATOR;
    std::string to_send = ss.str();
    MySend(user->getFd(), to_send);
    std::cout << "User "<< user->getId() <<" change his firstname to "<< user->getLastName() << std::endl;
}

void Parser::Birthday()
{
    User *user;

    user = FindUser(std::stoi(_cmdlist[1]));
    if(!user)
        return;

    user->setBirthday(_cmdlist[2]);
    std::stringstream ss;
    ss << std::to_string(eRequestId::BIRTHDAY) << _SEPARATOR << _cmdlist[2] << END_SEPARATOR;
    std::string to_send = ss.str();
    MySend(user->getFd(), to_send);
    std::cout << "User "<< user->getId() << " change his birthday to "<< user->getBirthday() << std::endl;
}

void Parser::Email()
{
    User *user;

    user = FindUser(std::stoi(_cmdlist[1]));
    if(!user)
        return;

    user->setEmail(_cmdlist[2]);
    std::stringstream ss;
    ss << std::to_string(eRequestId::EMAIL) << _SEPARATOR << _cmdlist[2] << END_SEPARATOR;
    std::string to_send = ss.str();
    MySend(user->getFd(), to_send);
    std::cout << "User "<< user->getId() <<"change his Email to "<< user->getEmail() << std::endl;
}

void Parser::Pseudo()
{
    User *user;

    user = FindUser(std::stoi(_cmdlist[1]));
    if(!user)
        return;

    user->setPseudo(_cmdlist[2]);
    std::stringstream ss;
    ss << std::to_string(eRequestId::PSEUDO) << _SEPARATOR << _cmdlist[2] << END_SEPARATOR;
    std::string to_send = ss.str();
    MySend(user->getFd(), to_send);
    std::cout << "User "<< user->getId() <<"change his Pseudo to "<< user->getPseudo() << std::endl;
}

void Parser::Status()
{
    User *user;
    User *tmp;

    user = FindUser(std::stoi(_cmdlist[1]));
    if(!user)
        return;

    user->setStatus(std::stoi(_cmdlist[2]));

    std::stringstream ss;
    ss << std::to_string(eRequestId::STATUS) << _SEPARATOR << std::to_string(user->getStatus()) << END_SEPARATOR;
    std::string to_send_client = ss.str();

    ss.str("");
    ss << std::to_string(eRequestId::STATUS) << _SEPARATOR << std::to_string(user->getId()) << _SEPARATOR << std::to_string(user->getStatus()) << END_SEPARATOR;
    std::string to_send_friend = ss.str();

    MySend(user->getFd(), to_send_client);

    for (int i = 0; i < user->getFriendlist().size(); i++)
    {
        tmp = FindUser(user->getFriendlist()[i]);
        if (tmp)
            MySend(tmp->getFd(), to_send_friend);
    }

    std::cout << "User "<< user->getId() <<"change his Status to "<< user->getStatus() << std::endl;
}

void Parser::Call()
{
    User *user;
    User *friend_to_call;

    user = FindUser(std::stoi(_cmdlist[1]));
    friend_to_call = FindUser(std::stoi(_cmdlist[2]));
    int port_client = std::stoi(_cmdlist[3]);

    if (!friend_to_call)
        return;
    if (friend_to_call->getStatus() == User::OFFLINE)
    {
        std::stringstream ss;
        ss << eError::OFFLINE << _SEPARATOR << "Friend is offline" << END_SEPARATOR;
        std::string to_send = ss.str();
        MySend(user->getFd(), to_send);
        return;
    }
    std::stringstream ss;
    ss << eRequestId::CALL << _SEPARATOR << user->getId() << _SEPARATOR << port_client << END_SEPARATOR;
    std::string send_to_client = ss.str();
    MySend(friend_to_call->getFd(), send_to_client);
    std::cout << "User "<< user->getId() <<"call "<< friend_to_call->getId() << std::endl;
}

void Parser::Accept_call()
{
    User *user;
    User *friend_to_call;

    std::cout << "je passe mgl" << std::endl;
    user = FindUser(std::stoi(_cmdlist[1]));
    friend_to_call = FindUser(std::stoi(_cmdlist[2]));
    if (!friend_to_call)
        return;

    if (friend_to_call->getStatus() == OFFLINE)
    {
        std::stringstream ss;
        ss << eError::OFFLINE << _SEPARATOR << "Friend if offline." << END_SEPARATOR;
        std::string to_send = ss.str();
        MySend(user->getFd(), to_send);
        std::cout << "Friend " << friend_to_call->getLogin() << " is offline." << std::endl;
        return;
    }
    std::stringstream ss;
    ss << eRequestId::ACCEPT_CALL << _SEPARATOR << friend_to_call->getIp() << END_SEPARATOR;
    std::string to_send_client = ss.str();

    ss.str("");
    ss << eRequestId::ACCEPT_CALL << _SEPARATOR << user->getIp() << END_SEPARATOR;
    std::string to_send_friend = ss.str();
    MySend(user->getFd(), to_send_client);
    MySend(friend_to_call->getFd(), to_send_friend);
    std::cout << "User "<< user->getId() <<" accept call from "<< friend_to_call->getId() << std::endl;
}

void Parser::Reject_call()
{
    User *user;
    User *friend_to_call;

    user = FindUser(std::stoi(_cmdlist[1]));
    friend_to_call = FindUser(std::stoi(_cmdlist[2]));
    if (!friend_to_call)
        return;

    std::stringstream ss;
    ss << eRequestId::REJECT_CALL << _SEPARATOR << std::to_string(user->getId()) << END_SEPARATOR;
    std::string to_send_friend = ss.str();

    MySend(friend_to_call->getFd(), to_send_friend);
    std::cout << "User "<< user->getId() <<" reject call from "<< friend_to_call->getId() << std::endl;
}

void Parser::Deconnexion()
{
    User *client;
    User *tmp;

    client = FindUser(std::stoi(_cmdlist[1]));
    if (!client)
        return;

    client->setStatus(User::OFFLINE);

    std::stringstream ss;
    ss << std::to_string(eRequestId::DECONNEXION) << _SEPARATOR << std::to_string(client->getStatus()) << END_SEPARATOR;
    std::string to_send_client = ss.str();

    MySend(client->getFd(), to_send_client);
    std::cout << "User "<< client->getId() <<" disconnected " << std::endl;

    ss.str("");
    ss << std::to_string(eRequestId::STATUS) << _SEPARATOR << std::to_string(client->getId()) << _SEPARATOR <<
       std::to_string(client->getStatus()) << END_SEPARATOR;
    std::string send_to_friend  = ss.str();
    for (int i = 0; i < client->getFriendlist().size(); i++)
    {
        tmp = FindUser(client->getFriendlist()[i]);
        if (tmp)
            MySend(tmp->getFd(), send_to_friend);
    }
    _os->closeFd(_fd);
}

void Parser::Add_friend()
{
	User *client = FindUser(std::stoi(_cmdlist[1]));
    User *friend_to_add = FindUser(std::stoi(_cmdlist[2]));

	for (int i = 0; i < client->getFriendlist().size(); i++)
    {
        if (client->getFriendlist()[i] == friend_to_add->getId())
        {
            std::cout << "Client " << client->getId() << " has already this friend" << std::endl;
            return;
        }
	}
    std::cout << "client ajoute : " << friend_to_add->getLogin() << "  amis ajoute : " << client->getLogin() << std::endl;
    client->setFriendlist(friend_to_add->getId());
    friend_to_add->setFriendlist(client->getId());

    std::stringstream ss;
    ss << std::to_string(eRequestId::ADD_FRIEND) << _SEPARATOR << std::to_string(friend_to_add->getId()) <<_SEPARATOR << friend_to_add->getPseudo() << END_SEPARATOR;
    std::string send_to_client = ss.str();
    MySend(client->getFd(), send_to_client);

    ss.str("");
    ss << std::to_string(eRequestId::ADD_FRIEND) << _SEPARATOR << std::to_string(client->getId()) << _SEPARATOR << client->getPseudo() << END_SEPARATOR;
    std::string send_to_friend = ss.str();
    MySend(friend_to_add->getFd(), send_to_friend);
}

void Parser::Remove_friends()
{
    User *client = FindUser(std::stoi(_cmdlist[1]));
    User *friend_to_del = FindUser(std::stoi(_cmdlist[2]));

    for (int i = 0; i < client->getFriendlist().size(); i++)
    {
        if (client->getFriendlist()[i] == friend_to_del->getId())
        {
            client->EraseFriendList(client, friend_to_del->getId());
            friend_to_del->EraseFriendList(friend_to_del, client->getId());

            std::stringstream ss;
            ss << std::to_string(eRequestId::REMOVE_FRIEND) << _SEPARATOR << std::to_string(friend_to_del->getId()) << END_SEPARATOR;
            std::string send_to_client = ss.str();
            MySend(client->getFd(), send_to_client);

            ss.str("");
            ss << std::to_string(eRequestId::REMOVE_FRIEND) << _SEPARATOR << std::to_string(client->getId()) << END_SEPARATOR;
            std::string send_to_friend = ss.str();
            MySend(friend_to_del->getFd(), send_to_friend);
            return;
        }
    }


    std::cout << "Client " << client->getId() << " has already this friend" << std::endl;
}

void Parser::Friend_info()
{
    User *user = FindUser(std::stoi(_cmdlist[1]));
    User *friend_info = FindUser(std::stoi(_cmdlist[2]));

    std::stringstream ss;
    ss << std::to_string(eRequestId::FRIEND_INFO) << _SEPARATOR << std::to_string(friend_info->getId())
       << _SEPARATOR << friend_info->getLogin() << _SEPARATOR << friend_info->getEmail() << _SEPARATOR << friend_info->getPseudo()
       << _SEPARATOR << friend_info->getBirthday() << _SEPARATOR << friend_info->getFirstName() << _SEPARATOR << friend_info->getLastName()
       << _SEPARATOR << std::to_string(friend_info->getStatus()) << END_SEPARATOR;
    std::string send_to_client = ss.str();
    MySend(user->getFd(), send_to_client);
}

void Parser::Friend_list()
{
    User *user = FindUser(std::stoi(_cmdlist[1]));
    User *tmp;
    std::string send_to_client = std::to_string(eRequestId::FRIENDS_LIST);

    for (int i = 0; i < user->getFriendlist().size(); i++)
    {
        tmp = FindUser(user->getFriendlist()[i]);
        send_to_client += _SEPARATOR;
        send_to_client += std::to_string(tmp->getId());
        send_to_client += _SEPARATOR;
        send_to_client += tmp->getPseudo();
        send_to_client += _SEPARATOR;
        send_to_client += std::to_string(tmp->getStatus());
        std::cout << "Friend List :" << tmp->getId() << " " << tmp->getStatus() << " " << tmp->getPseudo() << std::endl;
    }
    send_to_client += END_SEPARATOR;
    MySend(user->getFd(), send_to_client);
}

void Parser::Text()
{
    User *user;
    User *friend_;
    int text_size;

    user = FindUser(std::stoi(_cmdlist[1]));
    friend_ = FindUser(std::stoi(_cmdlist[2]));
    text_size = std::stoi(_cmdlist[3]);
    if (!friend_)
        return;
    std::string text_to_send = " ";
    for (int i = 4; i < _cmdlist.size() ; i++)
    {
        text_to_send += _cmdlist[i];
        if (i + 1 != _cmdlist.size())
            text_to_send += " ";
    }
    std::stringstream ss;
    ss << std::to_string(eRequestId::TEXT) << _SEPARATOR << std::to_string(user->getId()) << _SEPARATOR << text_to_send << END_SEPARATOR;
    std::string to_send_friend = ss.str();
    MySend(friend_->getFd(), to_send_friend);
    std::cout << "User "<< user->getId() <<" send "<< text_to_send << " to " <<friend_->getId() << std::endl;
}

void Parser::Audio()
{

}

void Parser::Id()
{
    User *client = nullptr;

    client = FindUser(std::stoi(_cmdlist[1]));
    if (!client)
        return;
    std::stringstream ss;
    ss << std::to_string(eRequestId::ID) << _SEPARATOR << std::to_string(client->getId()) << END_SEPARATOR;
    std::string to_send = ss.str();
    MySend(client->getFd(), to_send);
}

void Parser::Connexion()
{
    User *user;
    int id = -1;

    for (int i = 0; i < _userlist.size(); i++)
    {
        if (_cmdlist[1] == _userlist[i]->getPseudo() && _cmdlist[2] == _userlist[i]->getPassword())
            id = _userlist[i]->getId();
    }
    if (id == -1)
    {
        std::stringstream ss;
        ss << std::to_string(eError::AUTHENTIFICATION_ERROR) << _SEPARATOR << "Login or password incorrect." << END_SEPARATOR;
        std::string to_send_error = ss.str();
        MySend(_fd, to_send_error);
        std::cout << "login or passsword incorrect" << std::endl;
        return;
    }
    user = FindUser(id);
    if (!user)
        return;
	user->setFd(_fd);
	user->setIp(_ip);
    if (user->getStatus() == User::ONLINE)
    {
        std::stringstream ss;
        ss << std::to_string(eError::ALREADY_LOGGED) << _SEPARATOR << "You are already logged in..." << END_SEPARATOR;
        std::string to_send_err = ss.str();
        MySend(_fd, to_send_err);
        std::cout << "already logged in" << std::endl;
        return;
    }
    std::string to_send = std::to_string(eRequestId::CONNEXION);
    to_send += END_SEPARATOR;
    user->setStatus(User::ONLINE);
    MySend(user->getFd(), to_send);
	_cmdlist.clear();
	std::stringstream ss;
	ss << "12" << _SEPARATOR << std::to_string(id) << _SEPARATOR << std::to_string(id) << END_SEPARATOR;
    _cmdlist = this->deserialize(ss.str());
	if (_cmd[static_cast< eRequestId > (std::stoi(_cmdlist[0]))])
		(this->*_cmd[static_cast< eRequestId > (std::stoi(_cmdlist[0]))])();
}

void Parser::createAccount()
{

    for (int i = 0; i < _userlist.size(); i++)
    {
        if (_cmdlist[1] == _userlist[i]->getLogin())
        {
            std::cout << "it : " << _cmdlist[1] << " - " << _userlist[i]->getLogin()<< std::endl;
            std::stringstream ss;
            ss << std::to_string(eError::ACCOUNT_ALREADY_EXIST) << _SEPARATOR << "login already used." << END_SEPARATOR;
            std::string to_send = ss.str();
            MySend(_fd, to_send);
            return;
        }
    }
    auto *account = new User(_cmdlist[1], _cmdlist[2]);
    account->setId(static_cast<int>(_userlist.size()));
    account->setFd(_fd);
    account->setIp(_ip);
    _userlist.push_back(account);
    std::cout << "New Account id: " << account->getId() << " login: " << account->getLogin() << " pass: "
              << account->getPassword() << " fd: " << account->getFd()<< std::endl;
    std::string to_send = std::to_string(eRequestId::CREATE_ACCOUNT);
    to_send += END_SEPARATOR;
    MySend(account->getFd(), to_send);
    _cmdlist.clear();
    std::stringstream ss;
    ss << "17" << _SEPARATOR << account->getPseudo() << _SEPARATOR << account->getPassword() << END_SEPARATOR;
    _cmdlist = this->deserialize(ss.str());
    if (_cmd[static_cast< eRequestId > (std::stoi(_cmdlist[0]))])
        (this->*_cmd[static_cast< eRequestId > (std::stoi(_cmdlist[0]))])();
}

void Parser::SearchFriends()
{
    User *client = nullptr;
    User *tmp;
    std::string pseudo_to_search = _cmdlist[2];

    client = FindUser(std::stoi(_cmdlist[1]));
    if(!client)
        return;
    std::string send_to_client = std::to_string(eRequestId::FRIENDS_LIST_SEARCH);

    for (int i = 0; i < client->getFriendlist().size(); i++)
    {
        if (pseudo_to_search.find(pseudo_to_search) != std::string::npos)
        {
            tmp = FindUser(client->getFriendlist()[i]);
            send_to_client += _SEPARATOR;
            send_to_client += std::to_string(tmp->getId());
            send_to_client += _SEPARATOR;
            send_to_client += tmp->getPseudo();
            send_to_client += _SEPARATOR;
            send_to_client += std::to_string(tmp->getStatus());
        }
    }
    send_to_client += END_SEPARATOR;
    MySend(client->getFd(), send_to_client);
}

void Parser::MySend(int fd, const std::string &to_send)
{
    if (send(fd, to_send.c_str(), to_send.size(), 0) <= 0)
        std::cout << "Send failed" << std::endl;
}

std::vector<User *> Parser::getUserList() const
{
    return (_userlist);
}

int Parser::backUpFile() {
    std::string buffer = "";
    User *user;

    for (int i = 0; i < _userlist.size(); i++)
        {
            user = _userlist[i];
            buffer += user->getLogin();
            buffer += ":";
            buffer += user->getPassword();
            buffer += ":";
            buffer += user->getId();
            buffer += ":";
            buffer += user->getLastName();
            buffer += ":";
            buffer += user->getFirstName();
            buffer += ":";
            buffer += user->getBirthday();
            buffer += ":";
            buffer += user->getEmail();
            buffer += ":";
            buffer += user->getPseudo();
            buffer += ":";
            for (int j = 0; j < user->getFriendlist().size(); j++)
            {
                buffer += user->getFriendlist()[i];
                buffer += "|";
            }
            buffer += "\n";
            _file->FSWrite(buffer);
        }
    _file->FSClose();
    return 0;
}

int Parser::restoreFile(){
    std::string buffer;
    std::string result = "";
    std::string token;
    std::string token2;
    std::vector<std::string> line;
    User *user;

    if (_file->FSOpen(".users"))
    {
        while (_file->FSRead(buffer, 4096) > 0)
            result += buffer;
        std::istringstream ss(result);
        while(std::getline(ss, token, '\n'))
        {
            std::istringstream ss2(token);
            while(std::getline(ss2, token2, ':'))
            {
                line.push_back(token2);
            }
            user = new User(line[0], line[1]);
        }
    }
    return 0;
}
