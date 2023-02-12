#include "main.hpp"

int	main()
{
	try
	{
		Bureaucrat bob("Bob", 15);
		std::cout << bob;
		Bureaucrat Bob("Bob", 1500);
		std::cout << Bob;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
}
