#include "main.hpp"


ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name)
{
	std::cout << "Constructor Called ScavTrap" << std::endl;
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	return;

}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "Copy Constructor Called ScavTrap" << std::endl;

	return;

}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->Name = rhs.getName();
	}
	return (*this);
}

ScavTrap::~ScavTrap( void )
{

	std::cout << "Destructor Called ScavTrap" << std::endl;
	return;

}

void ScavTrap::guardGate(void)
{
	std::cout << this->Name <<" was the gate keeper" << std::endl;
}

std::ostream & operator<<( std::ostream & o, ScavTrap const & i )
{

	o << i.getName();
	return (o);

}
