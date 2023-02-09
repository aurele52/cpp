#ifndef Dog_CLASS_H
# define Dog_CLASS_H

#include "main.hpp"

class Dog: public Animal
{

	private:
		std::string type;
		Brain *brain;
	public:

	Dog( void );
	Dog( Dog const & src );
	virtual ~Dog( void );

	Dog & operator=( Dog const & rhs );
	virtual void	makeSound( void ) const;
	std::string getType( void ) const;

};

std::ostream & operator<<( std::ostream & o, Dog const & i );

#endif
