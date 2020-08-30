//
// Created by thenascrazy on 02/10/17.
//

#ifndef CPP_BABEL_USER_HH
# define CPP_BABEL_USER_HH

# include <iostream>
# include <vector>

class User
{
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
    std::vector <int> _friendlist;
    std::string         _ip;
public:
    enum Status {
        OFFLINE = 0,
        ONLINE,
        AWAY,
        BUSY,
        END
    };
    void setFd(const int &);
    void setId(const int &);
    void setLastName(const std::string &_lastname);
    void setFirstName(const std::string &_firstname);
    void setBirthday(const std::string &_birthday);
    void setEmail(const std::string &_email);
    void setPseudo(const std::string &_pseudo);
    void setLogin(const std::string &_login);
    void setPassword(const std::string &_password);
    void setStatus(int _status);
    void setFriendlist(int);
    void EraseFriendList(User *user, int friendId);
    void setIp(const std::string &_ip);


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
    std::vector<int> getFriendlist() const;
    const std::string &getIp() const;


    User(const std::string &, const std::string &);
    ~User();

};


#endif //CPP_BABEL_USER_HH
