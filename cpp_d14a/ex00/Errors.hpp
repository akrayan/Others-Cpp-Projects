//
// Errors.hpp for Errors.hpp in /home/rayan/Piscine_CPP/cpp_d14a/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:34:48 2017 Rayan
// Last update Wed Jan 18 09:34:50 2017 Rayan
//

#ifndef _ERRORS_
# define _ERRORS_

#include <string>

class NasaError : public std::exception
{
public:
    NasaError(std::string const &message, std::string const &component = "Unknown");
    virtual ~NasaError() throw();
    std::string const &getComponent() const;
    const char* what() const throw();

protected:
    std::string component;

private:
    std::string message;
};

class MissionCriticalError : public NasaError
{
public:
    MissionCriticalError(std::string const &message, std::string const &component = "Unknown");
    virtual ~MissionCriticalError() throw();
};

class LifeCriticalError : public NasaError
{
public:
    LifeCriticalError(std::string const &message, std::string const &component = "Unknown");
    virtual ~LifeCriticalError() throw();
};

class UserError : public NasaError
{
public:
    UserError(std::string const &message, std::string const &component = "Unknown");
    virtual ~UserError() throw();
};

class CommunicationError : public NasaError
{
public:
    CommunicationError(std::string const &message);
    virtual ~CommunicationError() throw();
};

#endif
