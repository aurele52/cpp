#include "main.hpp"


Span::Span( void ) : _sizeMax(0)
{

	std::cout << "Default Constructor Called" << std::endl;
	return;

}

Span::Span( unsigned int lol ) : _sizeMax(lol)
{

	std::cout << "Constructor Called with unsigned int" << std::endl;
	return;

}

Span::Span( Span const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

Span & Span::operator=( Span const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_sizeMax = rhs._sizeMax;
		this->_stock = rhs._stock;
	}
	return (*this);
}

Span::~Span( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::vector<int>	Span::getStock(void) const
{
	return (this->_stock);
}
unsigned int	Span::getSizeMax( void ) const
{
	return (this->_sizeMax);
}


std::ostream & operator<<( std::ostream & o, Span const & i )
{
	int	shortest = i.shortestSpan();
	int	longest = i.longestSpan();

	o << "have " << i.getStock().size() <<  " out off " << i.getSizeMax() << " shortest = ";
	o << i.shortestSpan() << " and longest = " << i.longestSpan();
	(void)longest;
	(void)shortest;
	(void)i;
	return (o);

}

void	Span::addNumber( int toAdd )
{
	if (_stock.size() == _sizeMax)
		throw std::out_of_range("out of place");
	_stock.push_back(toAdd);
}

void	Span::addByIteratorRange( std::vector<int>::iterator begin,
		std::vector<int>::iterator end)
{
	std::vector<int>	tmp(begin, end);

	if (_stock.size() + tmp.size() >= _sizeMax)
		throw std::out_of_range("out of place");
	copy(tmp.begin(), tmp.end(), std::back_inserter(this->_stock));
}

int	Span::shortestSpan( void ) const
{
	std::vector<int>::iterator	it;

	if (this->_stock.size() < 2)
		return (0);
	std::vector<int>	tmp(this->_stock);
	
	sort(tmp.begin(), tmp.end());
	int result = *(tmp.begin() + 1) - *tmp.begin();
	for (it = tmp.begin() + 1; it != tmp.end() - 1; it++)
	{
		if (*(it + 1) - *it < result)
			result = *(it + 1) - *it;
	}
	return (result);
}

int	Span::longestSpan( void ) const
{
	std::vector<int>	tmp(this->_stock);
	
	sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}

