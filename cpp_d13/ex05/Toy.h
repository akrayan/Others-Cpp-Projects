/*
** Toy.h for Toy.h in /home/rayan/Piscine_CPP/cpp_d13/ex05
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Tue Jan 17 09:28:46 2017 Rayan
** Last update Tue Jan 17 09:28:47 2017 Rayan
*/


#ifndef TOY_H_
# define TOY_H_

# include "Picture.h"

class	Toy
{
 public:
  class Error
  {
  public:
    typedef enum ErrorType
    {
      UNKNOWN,
      PICTURE,
      SPEAK,
    }		ErrorType;
    ErrorType	type;
    std::string what();
    std::string where();
  };
  typedef enum	ToyType
  {
    BASIC_TOY,
    ALIEN,
    BUZZ,
    WOODY,
  }		ToyType;
  ToyType	getType() const;
  std::string	getName() const;
  void		setName(std::string const name);
  std::string	getAscii() const;
  bool		setAscii(std::string const name);
  Toy();
  Toy(ToyType type, std::string const &name, std::string const &file);
  Toy(Toy const &other);
  ~Toy();
  virtual void	speak(const std::string &);
  virtual bool	speak_es(const std::string &statement);
  Toy &operator<<(const std::string);
  Error		getLastError();
 protected:
  ToyType	_type;
  std::string	_name;
  Picture	_picture;
  Error		_error;
};
std::ostream &operator<<(std::ostream &os, const Toy &other);
#endif /* !TOY_H_ */
