#ifndef WrongCat_CLASS_H
# define WrongCat_CLASS_H

#include "main.hpp"

class WrongCat: public WrongAnimal
{

	private:
		std::string type;
	public:

	WrongCat( void );
	WrongCat( WrongCat const & src );
	~WrongCat( void );

	WrongCat & operator=( WrongCat const & rhs );
	void	makeSound( void ) const;
	std::string getType( void ) const;

};

std::ostream & operator<<( std::ostream & o, WrongCat const & i );

#endif
