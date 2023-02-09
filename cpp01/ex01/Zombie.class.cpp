#include <iostream>
#include "Zombie.class.hpp"


Zombie::Zombie()
{
	std::cout << "Constructor Called" << std::endl;
	return;

}

Zombie::Zombie( std::string a ) : name(a)
{

	std::cout << "Constructor Called with " << a << std::endl;
	return;

}

Zombie::~Zombie( void )
{

	std::cout << "Destructor Called with " << this->name << std::endl;
	return;

}

void Zombie::setname( std::string name )
{
	this->name = name;
}

std::string Zombie::getname( void ) const
{
	return (this->name);
}

void	Zombie::announce( void ) const
{
	std::cout << this->getname() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
