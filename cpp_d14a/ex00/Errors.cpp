//
// Errors.cpp for Errors.cpp in /home/rayan/Piscine_CPP/cpp_d14a/ex00
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Wed Jan 18 09:33:21 2017 Rayan
// Last update Wed Jan 18 09:33:24 2017 Rayan
//

#include "Errors.hpp"

NasaError::NasaError(std::string const &message, std::string const &component) : component(component), message(message)
{
}

NasaError::~NasaError() throw()
{
}

const char* NasaError::what() const throw()
{
  return message.c_str();
}

std::string const &NasaError::getComponent() const
{
  return this->component;
}

MissionCriticalError::MissionCriticalError(std::string const &message, std::string const &component) : NasaError(message, component)
{
}

MissionCriticalError::~MissionCriticalError() throw()
{
}

LifeCriticalError::LifeCriticalError(std::string const &message, std::string const &component) : NasaError(message, component)
{

}

LifeCriticalError::~LifeCriticalError() throw()
{

}

UserError::UserError(std::string const &message, std::string const &component) : NasaError(message, component)
{

}

UserError::~UserError() throw()
{

}

CommunicationError::CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice")
{

}

CommunicationError::~CommunicationError() throw()
{
}
