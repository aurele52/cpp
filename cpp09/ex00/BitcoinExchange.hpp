#ifndef BitcoinExchange_CLASS_H
# define BitcoinExchange_CLASS_H

#include "main.hpp"

class BitcoinExchange
{

	public:

	BitcoinExchange( std::string infile );
	BitcoinExchange( BitcoinExchange const & src );
	~BitcoinExchange( void );
	std::map<const int, const float> getMap();
	void	search(const char *infile) const;
	BitcoinExchange & operator=( BitcoinExchange const & rhs );

	private:
	BitcoinExchange( void );
	std::map<const int, const float> _map;

};

std::ostream & operator<<( std::ostream & o, BitcoinExchange & i );

class	TooBig: public std::exception
{	
	public:
		const char * what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW {return "Error: too large a number";}
};

class	Negative: public std::exception
{	
	public:
		const char * what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW {return "Error: not a positive number";}
};

#endif
