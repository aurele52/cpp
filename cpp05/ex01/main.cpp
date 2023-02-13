#include "main.hpp"

int	main()
{
	try
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		Bureaucrat bob("Bob", 15);
		std::cout << bob;
		Form arg("arg", 20, 60);
		std::cout << arg;
		bob.signForm(arg);
		bob.signForm(arg);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
}
