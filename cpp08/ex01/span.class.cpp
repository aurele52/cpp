#include "main.hpp"


Span::Span( void ) : _SizeMax(0)
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

Span::Span( unsigned int lol ) : _SizeMax(lol)
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

Span::Span( Span const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

Span & Span::operator=( Span const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_sizeMax = rhs._sizeMax;
	}
	return (*this);
}

Span::~Span( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, Span const & i )
{

	o << i.get()
	return (o);

}
