#ifndef Span_CLASS_H
# define Span_CLASS_H

#include "main.hpp"

class Span
{

	public:

	Span( void );
	Span( unsigned int sizeMax );
	Span( Span const & src );
	~Span( void );

	Span & operator=( Span const & rhs );

	void addNumber( int toAdd );
	int	shortestSpan( void ) const;
	int	longestSpan( void )const;
	void	addByIteratorRange( std::vector<int>::iterator begin, std::vector<int>::iterator end);
	std::vector<int>	getStock(void) const;
	unsigned int getSizeMax( void ) const;
	

	private:

	std::vector<int>	_stock;
	unsigned int _sizeMax;

};

std::ostream & operator<<( std::ostream & o, Span const & i );

#endif
