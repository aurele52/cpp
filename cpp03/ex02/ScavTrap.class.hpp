#ifndef ScavTrap_CLASS_H
# define ScavTrap_CLASS_H

#include "main.hpp"

class ScavTrap : public ClapTrap
{

	public:

	ScavTrap( void );
	ScavTrap( const std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );
	void guardGate(void);
	ScavTrap & operator=( ScavTrap const & rhs );

};

std::ostream & operator<<( std::ostream & o, ScavTrap const & i );

#endif
