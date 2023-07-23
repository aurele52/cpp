#include "PmergeMe.hpp"
#include <unistd.h>

int	main(int argc, char **argv)
{
	PmergeMe	lol;
	PmergeMe	lol2;

	if (argc == 1 || argc > 20000)
	{
		std::cout << "Invalid number of argument" << std::endl;
		return (1);
	}
	try
	{
	/*
		for (int i = 1; i < argc; i++)
		{
				lol.add(argv[i]);
		}
		std::cout << "before = " << lol << std::endl;
		while (lol.getVector().size() != 2048 * 2 * 2 * 2 * 2 * 2)
			lol.addnan();
		std::clock_t c_start = std::clock();
		lol.pairsort( 0 );
		std::clock_t c_end = std::clock();
		double ret = 1000.0 * static_cast<double>(c_end - c_start) / CLOCKS_PER_SEC;
		std::cout << "time = " << ret << std::endl;
		lol.issort();
		std::cout << "after = " << lol << std::endl;
		*/
		for (int i = 1; i < argc; i++)
		{
				lol2.add2(argv[i]);
		}
		std::cout << "before = ";
		lol2.printDeque();
		std::cout << std::endl;
		while (lol2.getDeque().size() != 16)
			lol2.addnan2();
//		c_start = std::clock();
		lol2.pairsort2( 0 );
//		c_end = std::clock();
//		ret = 1000.0 * static_cast<double>(c_end - c_start) / CLOCKS_PER_SEC;
//		std::cout << "time = " << ret << std::endl;
		lol2.issort2();
		std::cout << "after = ";
		lol2.printDeque();
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
}
