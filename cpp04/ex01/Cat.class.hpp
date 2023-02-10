#ifndef Cat_CLASS_H
# define Cat_CLASS_H

#include "main.hpp"

class Cat: public Animal
{

	private:

	Brain	*brain;

	public:

	Cat( void );
	Cat( Cat const & src );
	~Cat( void );

	Cat & operator=( Cat const & rhs );
	void	makeSound( void ) const;

};

std::ostream & operator<<( std::ostream & o, Cat const & i );

#endif
