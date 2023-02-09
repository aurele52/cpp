#include "main.hpp"


WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "Constructor WrongCat Called" << std::endl;
	return;

}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{

	std::cout << "Copy Constructor WrongCat Called" << std::endl;
	*this = src;

	return;

}

WrongCat & WrongCat::operator=( WrongCat const & rhs )
{

	std::cout << "Assignment operator WrongCat Called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return (*this);
}

std::string WrongCat::getType( void ) const
{
	return (this->type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << *this << std::endl;
}

WrongCat::~WrongCat( void )
{

	std::cout << "Destructor Called WrongCat" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, WrongCat const & i )
{

	o << i.getType() << " : miaou";
	return (o);

}
