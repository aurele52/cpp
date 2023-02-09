#ifndef Cat_CLASS_H
# define Cat_CLASS_H

#include "main.hpp"

class Cat: public Animal
{

	private:
		std::string type;
		Brain	*brain;
	public:

	Cat( void );
	Cat( Cat const & src );
	virtual ~Cat( void );

	Cat & operator=( Cat const & rhs );
	virtual void	makeSound( void ) const;
	std::string getType( void ) const;

};

std::ostream & operator<<( std::ostream & o, Cat const & i );

#endif
