#ifndef Animal_CLASS_H
# define Animal_CLASS_H

#include "main.hpp"

class Animal
{

	public:

	Animal( );
	Animal( Animal const & src );
	virtual ~Animal( void );

	Animal & operator=( Animal const & rhs );
	virtual std::string getType( void ) const ;
	virtual void	makeSound(void) const ;

	protected:

	std::string	type;

};

std::ostream & operator<<( std::ostream & o, Animal const & i );

#endif
