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
	if (str.length() == 1 && ft_isdigit( str ) == -1)
		return (1);
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "nan" || str == "-inf" || str == "+inf")
		return (2);
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
			return (4);
		}
		else
			return (10);
	}
	if (ft_isdigit(str))
		return (5);
	return (10);
}

void	ft_conv(std::string str)
{
	int	type = ft_checktype( str );
	switch (type)
	{
		case 1: 
			std::cout << "char" << std::endl;
			break;
//			ft_convbychar( str );
		case  2:
			std::cout << "spe" << std::endl;
			break;
//			ft_convspec( str );
		case 3: 
			std::cout << "float" << std::endl;
			break;
//			ft_convbyfloat( str );
		case 4: 
			std::cout << "double" << std::endl;
			break;
//			ft_convbydouble( str );
		case 5: 
			std::cout << "int" << std::endl;
			break;
//			ft_convbyint( str );
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
