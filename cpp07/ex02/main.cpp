#include "Array.hpp"

int	main()
{
	Array <int>lol(10);

	lol[4] = 5;
	std::cout << lol.getPtr()[4] << std::endl;
	Array <int>qwe(lol);
	std::cout << qwe.getPtr()[4] << std::endl;
	Array <int>qw = lol;
	std::cout << qw.getPtr()[4] << std::endl;
	qw[3] = 6;
	std::cout << lol.getPtr()[3] << std::endl;
	std::cout << qwe.getPtr()[3] << std::endl;
	std::cout << qw.getPtr()[3] << std::endl;
	try
	{
		qw[-1] = 6;
	}
	catch (std::exception &error)
	{
//		std::cout << error.what();
	}
}
