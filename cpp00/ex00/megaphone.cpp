#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1; j  < argc; j++)
		{
			for (int i = 0; i < strlen(argv[j]); i++)
			{
				argv[j][i] = std::toupper(argv[j][i]);
			}
			std::cout << argv[j];
		}
		std::cout << std::endl;
	}
}
