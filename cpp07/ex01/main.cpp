#include "iter.hpp"

void	ft_lol(char &str)
{
	std::cout << str;
}

int	main(int argc, char **argv)
{
	(void)argc;
	iter(argv[1], 4, ft_lol);
}
