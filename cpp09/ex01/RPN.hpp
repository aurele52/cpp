#ifndef RPN_CLASS_H
# define RPN_CLASS_H

#include "main.hpp"

class RPN
{

	public:

	RPN( char *input );
	RPN( RPN & src );
	~RPN( void );
	std::stack<int>	getStack( void );

	RPN & operator=( RPN & rhs );

	private:

	RPN( void );
	int	_result;
	std::stack<int> _stack;

};

std::ostream & operator<<( std::ostream & o, RPN & i );

#endif
