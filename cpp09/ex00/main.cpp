
#include "main.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	BitcoinExchange lol("data.csv");
	lol.search(argv[1]);
//	std::cout << lol << std::endl;
}
