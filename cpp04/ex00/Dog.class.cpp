#include "main.hpp"


Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Constructor Dog Called" << std::endl;
	return;

}

Dog::Dog( Dog const & src ) : Animal(src)
{

	std::cout << "Copy Constructor Dog Called" << std::endl;
	*this = src;

	return;

}

Dog & Dog::operator=( Dog const & rhs )
{

	std::cout << "Assignment operator Dog Called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return (*this);
}

std::string Dog::getType( void ) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << *this << std::endl;
}

Dog::~Dog( void )
{

	std::cout << "Destructor Called Dog" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, Dog const & i )
{

	o << i.getType() << " : wouaf";
	return (o);

}
