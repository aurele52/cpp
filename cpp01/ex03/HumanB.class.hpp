#ifndef HumanB_CLASS_H
# define HumanB_CLASS_H

#include "Weapon.class.hpp"

class HumanB
{

	public:

	HumanB( std::string name);
	~HumanB( void );
	void	setWeapon( Weapon &arm );
	void	attack( void ) const;

	private:

	std::string name;
	Weapon *arm;
};


#endif
