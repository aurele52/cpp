#include "main.hpp"

int	main(int argc, char **argv)
{
	PmergeMe	lol;

	try
	{
		for (int i = 1; i < argc; i++)
		{
				lol.add(argv[i]);
		}
		while (lol.getVector().size() != 8)
			lol.addnan();
		lol.pairsort( 0 );
		std::cout << lol << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	//double

}
