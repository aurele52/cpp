#include <iostream>
#include "HumanB.class.hpp"

HumanB::HumanB( std::string name) : name(name)
{
	this->arm = 0;
	std::cout << "Constructor Called" << std::endl;
	return;

}

HumanB::~HumanB( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

void	HumanB::setWeapon( Weapon &arm)
{
	this->arm = &arm;
}

void	HumanB::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->arm->gettype() << std::endl;
}
