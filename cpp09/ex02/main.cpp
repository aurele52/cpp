#include "main.hpp"
int	ft_search(std::vector<float>::iterator deb, std::vector<float>::iterator fin, float act);

int	main(int argc, char **argv)
{
	PmergeMe	lol;

	try
	{
		for (int i = 1; i < argc; i++)
		{
				lol.add(argv[i]);
		}
//		std::cout << "before = " << lol << std::endl;
		while (lol.getVector().size() != 2048 * 2 * 2)
			lol.addnan();
		lol.pairsort( 0 );
		lol.issort();
//		std::cout << "after = " << lol << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
