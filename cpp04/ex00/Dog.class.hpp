#ifndef Dog_CLASS_H
# define Dog_CLASS_H

#include "main.hpp"

class Dog: public Animal
{

	public:

	Dog( void );
	Dog( Dog const & src );
	~Dog( void );

	Dog & operator=( Dog const & rhs );
	void	makeSound( void ) const;

};

std::ostream & operator<<( std::ostream & o, Dog const & i );

#endif
