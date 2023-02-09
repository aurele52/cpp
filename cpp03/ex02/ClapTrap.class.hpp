#ifndef ClapTrap_CLASS_H
# define ClapTrap_CLASS_H

#include "main.hpp"

class ClapTrap
{

	public:

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );
	ClapTrap & operator=( ClapTrap const & rhs );

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		getHitpoints( void ) const;
	std::string		getName( void ) const;
	int		getEnergypoints( void ) const;
	int		getAttackdamage( void ) const;

	protected:

	std::string	Name;
	int	Hitpoints;
	int	Energypoints;
	int	Attackdamage;

};

std::ostream & operator<<( std::ostream & o, ClapTrap const & i );

#endif
