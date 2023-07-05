#include "main.hpp"


BitcoinExchange::BitcoinExchange( void ) : _map()
{

	
	std::cout << "Constructor Called" << std::endl;
	return;

}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src ) : _map(src._map)
{
}

std::map<const int, const float> BitcoinExchange::getMap()
{
	return (_map);
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_map = rhs._map;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, BitcoinExchange const & i )
{
	o << "hello";
	return (o);
	o << i;

}
