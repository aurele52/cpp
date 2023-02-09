#include "main.hpp"

ClapTrap::ClapTrap( std::string name )
{

	std::cout << "Constructor Called" << std::endl;
	this->Name = name;
	this->Hitpoints = 10;
	this->Energypoints = 10;
	this->Attackdamage= 0;
	return;

}

ClapTrap::ClapTrap( ClapTrap const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->Name = rhs.getName();
		this->Hitpoints = rhs.getHitpoints();
		this->Energypoints = rhs.getEnergypoints();
		this->Attackdamage= rhs.getAttackdamage();
	}
	return (*this);
}

ClapTrap::ClapTrap( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

ClapTrap::~ClapTrap( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::string	ClapTrap::getName( void ) const
{
	return (this->Name);
}

int	ClapTrap::getEnergypoints( void ) const
{
	return (this->Energypoints);
}

int	ClapTrap::getAttackdamage( void ) const
{
	return (this->Attackdamage);
}

int	ClapTrap::getHitpoints( void ) const
{
	return (this->Hitpoints);
}

std::ostream & operator<<( std::ostream & o, ClapTrap const & i )
{

	o << i.getHitpoints();
	return (o);

}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Hitpoints < 1 || this->Energypoints < 1)
	{
		std::cout << "Attack Impossible" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing " << this->Attackdamage << " points of damage" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints = this->Hitpoints - amount;
	if (this->Hitpoints < 0)
		this->Hitpoints = 0;
	std::cout << "ClapTrap " << this->Name << " has take " << amount << " damage"<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hitpoints < 1 || this->Energypoints < 1)
	{
		std::cout << "Repair Impossible" << std::endl;
		return;
	}
	this->Hitpoints = this->Hitpoints + amount;
	this->Energypoints--;
	std::cout << "ClapTrap " << this->Name << " was repaired of " << amount << " HP"<< std::endl;
}
