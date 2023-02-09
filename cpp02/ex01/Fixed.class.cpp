#include "main.hpp"


Fixed::Fixed( void )
{

	std::cout << "Constructor Called" << std::endl;
	this->RawBits = 0;
	return;

}

Fixed::Fixed( const float raw )
{
	std::cout << "Constructor Called" << std::endl;
	this->RawBits = roundf(raw * pow(2, bitf));
	return;

}

Fixed::Fixed( const int raw )
{

	std::cout << "Constructor Called with int" << std::endl;
	this->RawBits = (raw << this->bitf);
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

int	Fixed::toInt( void ) const
{
	return (this->RawBits >> this->bitf);
}

float	Fixed::toFloat( void ) const
{
	return (this->RawBits / pow(2, this->bitf));
}

std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;

}
