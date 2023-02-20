#include "main.hpp"


span::span( void )
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

span::span( span const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

span & span::operator=( span const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
	this-> = rhs.get();
	}
	return (*this);
}

span::~span( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, span const & i )
{

	o << i.get()
	return (o);

}
