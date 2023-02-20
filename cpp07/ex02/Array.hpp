#ifndef MAIN_H
# define MAIN_H

#include <string>
#include <iostream>

template <typename T>

class Array
{
	private :
		T * _ptr;
		unsigned int	_size;

	public :

	Array() : _size(0)
	{
		_ptr = new T [1];
		_ptr[0] = 0;
		std::cout << "construct array default" << std::endl;
	}
	
	Array( unsigned int n) : _size(n)
	{
		_ptr = new T [n];
		for (unsigned int i = 0; i < n; i++)
			_ptr[i] = 0;
		std::cout << "construct array with int" << std::endl;
	}
	Array( const Array &src)
	{
		std::cout << "construct array copy" << std::endl;
		_ptr = new T [src.size()];
		*this = src;
	}
	class badIndex : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	~Array()
	{
		delete [] _ptr;
		std::cout << "destruct array default" << std::endl;

	}
	T	*getPtr( void) const
	{
		return (this->_ptr);
	}
	unsigned int	size( void) const
	{
		return (this->_size);
	}
	Array &operator=(const Array &src)
	{
		for (unsigned int i = 0; i < src.size(); i++)
			_ptr[i] = src.getPtr()[i];
		this->_size = src.size();
		return (*this);
	}
	T &operator[](int i)
	{
		std::cout << this->size() << "lol" << std::endl;
		if (i > static_cast<int>(this->size()) || i < 0)
			throw (Array<T>::badIndex());
		return (this->_ptr[i]);
	}
};

template<typename T>
const char	*Array<T>::badIndex::what() const throw()
{
	return ("Bad Index");
}


#endif
