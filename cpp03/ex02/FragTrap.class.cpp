#include "main.hpp"


FragTrap::FragTrap( const std::string name ) : ClapTrap(name)
{
	std::cout << "Constructor Called FragTrap" << std::endl;
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	return;

}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "Copy Constructor Called FragTrap" << std::endl;

	return;

}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->Name = rhs.getName();
	}
	return (*this);
}

FragTrap::~FragTrap( void )
{

	std::cout << "Destructor Called FragTrap" << std::endl;
	return;

}

void FragTrap::highFivesGuys(void)
{
	std::cout << " give me a highfives" << std::endl;
}

std::ostream & operator<<( std::ostream & o, FragTrap const & i )
{

	o << i.getName();
	return (o);

}
