#ifndef WrongAnimal_CLASS_H
# define WrongAnimal_CLASS_H

#include "main.hpp"

class WrongAnimal
{

	public:

	WrongAnimal( );
	WrongAnimal( WrongAnimal const & src );
	~WrongAnimal( void );

	WrongAnimal & operator=( WrongAnimal const & rhs );
	std::string getType( void ) const ;
	void	makeSound(void) const ;

	protected:

	std::string	type;

};

std::ostream & operator<<( std::ostream & o, WrongAnimal const & i );

#endif
