#include <iostream>
#include "Zombie.class.hpp"


Zombie::Zombie( std::string a ) : name(a)
{

	std::cout << "Constructor Called" << std::endl;
	return;

}


Zombie::~Zombie( void )
{

	std::cout << "Destructor Called with " << this->name << std::endl;
	return;

}

std::string Zombie::getname( void ) const
{
	return (this->name);
}

void	Zombie::announce( void ) const
{
	std::cout << this->getname() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
