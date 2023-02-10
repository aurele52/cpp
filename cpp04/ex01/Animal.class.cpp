#include "main.hpp"


Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Constructor Called Animal" << std::endl;
	return;

}

Animal::Animal( Animal const & src )
{

	std::cout << "Copy Constructor Animal Called" << std::endl;
	*this = src;

	return;

}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

Animal & Animal::operator=( Animal const & rhs )
{

	std::cout << "Assignment operator Animal Called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return (*this);
}

Animal::~Animal( void )
{

	std::cout << "Destructor Called Animal" << std::endl;
	return;

}

void	Animal::makeSound(void) const 
{
	std::cout << *this << " : ??????" << std::endl;
}

std::ostream & operator<<( std::ostream & o, Animal const & i )
{

	o << i.getType();
	return (o);

}
