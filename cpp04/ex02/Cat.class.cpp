#include "main.hpp"


Cat::Cat( void )
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Constructor Cat Called" << std::endl;
	return;

}

Cat::Cat( Cat const & src ) : Animal(src)
{

	std::cout << "Copy Constructor Cat Called" << std::endl;
	*this = src;
	return;

}

Cat & Cat::operator=( Cat const & rhs )
{

	std::cout << "Assignment operator Cat Called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return (*this);
}

std::string Cat::getType( void ) const
{
	return (this->type);
}

void	Cat::makeSound(void) const
{
	std::cout << *this << std::endl;
}

Cat::~Cat( void )
{

	delete brain;
	std::cout << "Destructor Called Cat" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, Cat const & i )
{

	o << i.getType() << " : miaou";
	return (o);

}
