#include <iostream>

int main()
{
	int i = 1;
	int j = 1;
	int lol = j;
	int mem = j;
	std::cout << i << " ";
	while (i < 600000)
	{
		mem = j;
		j = 2 * i + j;
		i = mem;
		lol = j;
		std::cout << lol - i << ", ";
	}
}
