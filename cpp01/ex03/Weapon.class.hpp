#ifndef Weapon_CLASS_H
# define Weapon_CLASS_H

#include <iostream>
#include <string>

class Weapon
{

	public:

	Weapon( std::string type );
	~Weapon( void );
	void	setType( std::string type);
	std::string gettype( void ) const;

	private:
	std::string	type;
};


#endif
