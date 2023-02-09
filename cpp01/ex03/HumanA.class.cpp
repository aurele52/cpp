#include <iostream>
#include "HumanA.class.hpp"


HumanA::HumanA( std::string name, Weapon &arm ) : name(name), arm(arm)
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

HumanA::~HumanA( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->arm.gettype() << std::endl;
}
