#ifndef BitcoinExchange_CLASS_H
# define BitcoinExchange_CLASS_H

#include "main.hpp"

class BitcoinExchange
{

	public:

	BitcoinExchange( void );
	BitcoinExchange( BitcoinExchange const & src );
	~BitcoinExchange( void );
	std::map<const int, const float> getMap();

	BitcoinExchange & operator=( BitcoinExchange const & rhs );

	private:
	std::map<const int, const float> _map;

};

std::ostream & operator<<( std::ostream & o, BitcoinExchange const & i );

#endif
