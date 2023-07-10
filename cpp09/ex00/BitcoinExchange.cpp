#include "main.hpp"


BitcoinExchange::BitcoinExchange( std::string infile ) : _map()
{

	
	std::string tmp;
	std::ifstream in(infile.c_str());
	getline(in, tmp);
	while (getline(in, tmp))
	{
		std::istringstream lol(tmp);
		int day;
		int month;
		int year;
		char qwe;
		lol >> year;
		lol >> qwe;
		lol >> month;
		lol >> qwe;
		lol >> day;
		int jour = year * 10000 + month * 100 + day;
		lol >> qwe;
		float value;
		lol >> value;
		_map.insert(std::pair<int, float>(jour, value));
	}
	return;

}

void	BitcoinExchange::search(const char *infile) const
{
	const int jump[12] =  {31, 28, 31,30,31,30,31,31,30,31,30,31};
	std::string line;
	std::ifstream in(infile);
	getline(in, line);

	while (getline(in, line))
	{
		std::istringstream lol(line);
		int day;
		int month;
		int year;
		char qwe;
		lol >> year;
		lol >> qwe;
		lol >> month;
		lol >> qwe;
		lol >> day;
		int jour = year * 10000 + month * 100 + day;
		lol >> qwe;
		float value;
		lol >> value;
		std::map<const int, const float>::const_iterator tem = _map.upper_bound(jour);
		tem--;
		try
		{
		if (year < 0 || month < 0 || day < 0)
				throw  std::invalid_argument("Negative argument");
		if (month > 12 || day > jump[month] + ((year % 4 == 0 && year % 100 > 0) || (year % 400 == 0)))
		{
			std::string err("Bad input => ");
			err.insert(err.end(),line.begin(), line.end());
			throw std::invalid_argument(err);
		}
		if (lol.bad())
			throw std::invalid_argument("Number to big");
		if (value <= 0)
				throw  std::invalid_argument("Not a positive number");
		if (value > 1000)
				throw  std::invalid_argument("Too large number");

		std::cout << year << "-" << std::setfill('0') << std::setw(2) << month;
		std::cout << "-" << std::setfill('0') << std::setw(2) << day << " = " << tem->second << " = " << tem->second * value << std::endl;

	}
	catch (std::invalid_argument &e)
	{
		std::cout << "Error : " << e.what() << "." << std::endl;
	}
	}
	std::cout << line;
}

BitcoinExchange::BitcoinExchange( void ) : _map()
{

	
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


	if ( this != &rhs )
	{
		this->_map = rhs._map;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange( void )
{

	return;

}

std::ostream & operator<<( std::ostream & o, BitcoinExchange & ma )
{
	const std::map<const int, const float> _map = ma.getMap();
	for (std::map<const int, const float>::const_iterator i = _map.begin() ; i != _map.end() ; i++)
		o << '[' << i->first << "] = " << i->second << std::endl;
	return (o);
}
