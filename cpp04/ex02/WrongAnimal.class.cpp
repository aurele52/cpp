#include "main.hpp"


WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "Constructor Called WrongAnimal" << std::endl;
	return;

}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{

	std::cout << "Copy Constructor WrongAnimal Called" << std::endl;
	*this = src;

	return;

}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{

	std::cout << "Assignment operator WrongAnimal Called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{

	std::cout << "Destructor Called WrongAnimal" << std::endl;
	return;

}

void	WrongAnimal::makeSound(void) const 
{
	std::cout << *this << std::endl;
}

std::ostream & operator<<( std::ostream & o, WrongAnimal const & i )
{

	o << i.getType() <<" : ?????";
	return (o);

}
