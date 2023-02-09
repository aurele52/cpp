#ifndef HumanA_CLASS_H
# define HumanA_CLASS_H

#include "Weapon.class.hpp"

class HumanA
{

	public:

	HumanA( std::string name, Weapon &arm );
	~HumanA( void );
	void	attack( void ) const;

	private:

	std::string name;
	Weapon &arm;
};


#endif
