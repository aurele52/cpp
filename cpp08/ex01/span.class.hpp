#ifndef span_CLASS_H
# define span_CLASS_H

#include "main.hpp"

class span
{

	public:

	span( void );
	span( span const & src );
	~span( void );

	span & operator=( span const & rhs );

	private:

};

std::ostream & operator<<( std::ostream & o, span const & i );

#endif
