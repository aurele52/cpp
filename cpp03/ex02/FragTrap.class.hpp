#ifndef FragTrap_CLASS_H
# define FragTrap_CLASS_H

#include "main.hpp"

class FragTrap : public ClapTrap
{

	public:

	FragTrap( void );
	FragTrap( const std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );
	void highFivesGuys(void);
	FragTrap & operator=( FragTrap const & rhs );

};

std::ostream & operator<<( std::ostream & o, FragTrap const & i );

#endif
