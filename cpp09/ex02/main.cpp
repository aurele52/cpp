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
		while (lol.getVector().size() != 32)
			lol.addnan();
		lol.pairsort( 0 );
//		std::vector<float> qwe = lol.getVector();
//		ft_search(qwe.begin(), qwe.begin() + 4 - 1, 1);
//		lol.moveback(1, 0);
//			std::cout << "i = "<< i  << " ou = " << ou << std::endl;
		std::cout << lol << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	//double

}
