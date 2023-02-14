#include "main.hpp"

int	ft_isdigit(std::string str)
{
	for (long unsigned int i = 0; i < str.length(); i++)
	{
		if (str[i] && (str[i] < '0' || str[i] > '9'))
			return (-1);
	}
	return (1);
}
int	ft_checktype(std::string str)
{
	char	sign = 0;

	if (str.length() == 1 && ft_isdigit( str ) == -1)
		return (1);
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "nan" || str == "-inf" || str == "+inf")
		return (2);
	if (str[0] == '+')
		str.erase(0,1);
	if (str[0] == '-')
	{
		sign = 1;
		str.erase(0,1);
	}
	if (str[str.length() - 1] == 'f')
	{
		int test;

		str[str.length() - 1]= 0;
		test = str.find(".");
		if (test == -1 || test == 0 || test == static_cast<int>(str.length() - 1))
			return (10);
		str[test] = '0';
		if (ft_isdigit(str) == 1)
		{
			str[test] = '.';
			if (sign == 1)
				str.insert(0,"-");
			return (3);
		}
		else
			return (10);
	}
	int test;

	test = str.find(".");
	if (test != -1)
	{
		if (test == static_cast<int>(str.length() - 1) || test == 0)
			return (10);
		str[test] = '0';
		if (ft_isdigit(str) == 1)
		{
			str[test] = '.';
			if (sign == 1)
				str.insert(0,"-");
			return (4);
		}
		else
			return (10);
	}
	if (ft_isdigit(str) == 1)
	{
			if (sign == 1)
				str.insert(0,"-");
		return (5);
	}
	return (10);
}

void	ft_convspec( std::string str )
{
	if (str[0] == '+')
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: +inff"  << std::endl << "double: +inf" << std::endl;
	if (str[0] == '-')
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: -inff"  << std::endl << "double: -inf" << std::endl;
	if (str[0] == 'n')
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: nanf"  << std::endl << "double: nan" << std::endl;
}

#include <climits>

void	ft_convfloat( const char *str )
{
	char **sz = 0;

	double	lol = std::strtod(str, sz);

	if (sz != 0)
		std::cout << "Wrong input" << std::endl;
	else
	{
		if (lol > CHAR_MIN && lol < CHAR_MAX)
		{
			if (lol < 32 || lol > 126)
				std::cout << "char: no displayable" << std::endl;
			else
				std::cout << "char: '"<< static_cast<char>(lol) << "'" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
		if (lol > INT_MIN && lol < INT_MAX)
			std::cout << "int: "<< static_cast<int>(lol) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		std::cout << "float: "<< static_cast<float>(lol);
		if (static_cast<float>(lol) - static_cast<int>(lol) == 0.0 && (lol < 1000000 && lol > -1000000))
			std::cout << ".0";
		std::cout << "f" << std::endl;
		std::cout << "double: "<< static_cast<float>(lol);
		if (lol - static_cast<int>(lol) == 0.0 && (lol < 1000000 && lol > -1000000))
			std::cout << ".0";
		std::cout << std::endl;
	}
}

void	ft_convint( const char *str )
{
	char **sz = 0;

	double	lol = std::strtod(str, sz);

	if (sz != 0)
		std::cout << "Wrong input" << std::endl;
	else if (lol < INT_MIN || lol > INT_MAX)
		std::cout << "Int Overflow" << std::endl;
	else
	{
		if (lol > CHAR_MIN && lol < CHAR_MAX)
		{
			if (lol < 32 || lol > 126)
				std::cout << "char: no displayable" << std::endl;
			else
				std::cout << "char: '"<< static_cast<char>(lol) << "'" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: "<< static_cast<int>(lol) << std::endl;
		std::cout << "float: "<< static_cast<int>(lol) << ".0f" << std::endl;
		std::cout << "double: "<< static_cast<int>(lol) << ".0" << std::endl;
	}
}

void	ft_convdouble( const char *str )
{
	char **sz = 0;

	double	lol = std::strtod(str, sz);

	if (sz != 0)
		std::cout << "Wrong input" << std::endl;
	else
	{
		if (lol > CHAR_MIN && lol < CHAR_MAX)
		{
			if (lol < 32 || lol > 126)
				std::cout << "char: no displayable" << std::endl;
			else
				std::cout << "char: '"<< static_cast<char>(lol) << "'" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
		if (lol > INT_MIN && lol < INT_MAX)
			std::cout << "int: "<< static_cast<int>(lol) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		std::cout << "float: "<< static_cast<float>(lol);
		if (static_cast<float>(lol) - static_cast<int>(lol) == 0.0 && (lol < 1000000 && lol > -1000000))
			std::cout << ".0";
		std::cout << "f" << std::endl;
		std::cout << "double: "<< lol;
		if (lol - static_cast<int>(lol) == 0.0 && (lol < 1000000 && lol > -1000000))
			std::cout << ".0";
		std::cout << std::endl;
	}
}

void	ft_convchar( std::string str )
{
	if (str[0] < 32 || str[0] > 126)
		std::cout << "char: no displayable" << std::endl;
	else
		std::cout << "char: '" << str[0] << "'" << std::endl;
	std::cout << "int: "<< static_cast<int>(str[0]) << std::endl;
	std::cout << "float: "<< static_cast<int>(str[0]) << ".0f" << std::endl;
	std::cout << "double: "<< static_cast<int>(str[0]) << ".0" << std::endl;
}

void	ft_conv(std::string str)
{
	int	type = ft_checktype( str );
	switch (type)
	{
		case 1: 
			ft_convchar( str );
			break;
		case  2:
			ft_convspec( str );
			break;
		case 3: 
			ft_convfloat( str.c_str() );
			break;
		case 4: 
			ft_convdouble( str.c_str() );
			break;
		case 5: 
			ft_convint( str.c_str() );
			break;
		case 10: 
			std::cout << "not a type" << std::endl;
			break;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (-1);
	}
	ft_conv(argv[1]);
}
