#include "main.hpp"

int	main()
{
	Span	test;

	try
	{
		test.addNumber(6);
		std::cout << test << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Span	lol(10);

	try
	{
		lol.addNumber(16);
		lol.addNumber(10);
		lol.addNumber(6);
		lol.addNumber(9);
		lol.addNumber(8);
		lol.addNumber(7);
		lol.addNumber(15);
		lol.addNumber(4);
		lol.addNumber(1);
		lol.addNumber(-13);
		std::cout << lol << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Span	arg(lol);
	Span	qwe = lol;
	std::cout << qwe << std::endl;
	std::cout << arg << std::endl;

	try
	{
		lol.addNumber(6);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
