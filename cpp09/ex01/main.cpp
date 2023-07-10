#include "main.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : Wrong number of argument";
		return (1);
	}
	try
	{
		RPN lol(argv[1]);
	}
	catch (std::exception & e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
}
