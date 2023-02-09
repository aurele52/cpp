#include "Weapon.class.hpp"


Weapon::Weapon( std::string type ) : type(type)
{

	std::cout << "Constructor Called" << std::endl;
	return;

}


Weapon::~Weapon( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

void	Weapon::setType( std::string type )
{
	this->type = type;
}

std::string	Weapon::gettype( void ) const
{
	return (this->type);
}
