//
// ex05.hpp for ex05.hpp in /home/rayan/Piscine_CPP/cpp_d15/ex05
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Thu Jan 19 09:33:57 2017 Rayan
// Last update Thu Jan 19 09:33:58 2017 Rayan
//

#ifndef EX05_HPP_
# define EX05_HPP_

# include <iostream>

template<typename T>
class array
{
public:
  array() : _tab(NULL), _size(0) {}
  array(unsigned int n) : _tab(NULL), _size(n)
  {
    unsigned int i;

    i = 0;
    this->_tab = new T[_size];
    while (i < _size)
      {
	this->_tab[i] = 0;
	i = i + 1;
      }
  }

  array(array const &other) : _tab(other._tab), _size(other._size)
  {
    unsigned int i;

    i = 0;
    this->_tab = new T[_size];
    while (i < _size)
      {
	this->_tab[i] = other._tab[i];
	i = i + 1;
      }
  }
  ~array()
  {
    if (_tab != NULL)
      delete[] _tab;
  }
  array& operator=(array const& other)
  {
    unsigned int i;

    i = 0;
    _size = other._size;
    delete[] _tab;
    _tab = new T[_size];
    while (i < _size)
      {
	this->_tab[i] = other._tab[i];
	i = i + 1;
      }
    return *this;
  }

  T& operator[](unsigned int index)
  {
    unsigned int i;
    if (index >= _size)
      {
	i = 0;
	T* _new = new T[index + 1];
	while (i < _size)
	  {
	    _new[i] = _tab[i];
	    i = i + 1;
	  }
	delete[] _tab;
	_tab = _new;
	_size = index + 1;
      }
    return _tab[index];
  }

  T const& operator[](unsigned int index) const
  {
    if (index >= _size)
      throw std::exception();
    return _tab[index];
  }
  unsigned int size() const
  {
    return _size;
  }

  void dump() const
  {
    unsigned int i;

    i = 0;
    std::cout << "[";
    while (i < _size)
      {
	std::cout << _tab[i];
	if (i + 1 < _size)
	  std::cout << ", ";
	i = i + 1;
      }
    std::cout << "]" << std::endl;
  }


  template<class U>
  array<U> convertTo(U (*convert)(T const& v)) const
  {
    unsigned int i;

    i = 0;
    array<U> other(_size);
    while (i < _size)
      {
	other[i] = (*convert)(_tab[i]);
	i = i + 1;
      }
    return other;
  }
private:
  T *_tab;
  unsigned int _size;
};

template <>
void array<bool>::dump () const
{
  unsigned int i;

  i = 0;
  std::cout << "[";
  while (i < _size)
    {
      std::cout << std::boolalpha << _tab[i];
      if (i + 1 < _size)
	std::cout << ", ";
      i = i + 1;
    }
  std::cout << "]" << std::endl;
}


#endif /* !EX05_HPP_ */
