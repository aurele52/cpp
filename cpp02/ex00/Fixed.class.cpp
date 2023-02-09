#include "main.hpp"


Fixed::Fixed( void )
{

	std::cout << "Constructor Called" << std::endl;
	this->RawBits = 0;
	return;

}

Fixed::Fixed( Fixed const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

void	Fixed::setRawBits( int const raw )
{
	this->RawBits = raw;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;
	if ( this != &rhs )
	{
		this->RawBits = rhs.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void )
{

std::cout << "Destructor Called" << std::endl;
return;

}


int	Fixed::getRawBits( void ) const
{
	return (this->RawBits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
	o << i.getRawBits();
	return o;

}
