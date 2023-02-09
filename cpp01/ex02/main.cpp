#include <iostream>

int	main()
{
	std::string temp = "HI THIS IS BRAIN";
	std::string *stringPTR = &temp;
	std::string &stringREF = temp;

	std::cout << &temp << " " << stringPTR << " " << &stringREF << std::endl;
	std::cout << temp << " " << *stringPTR << " " << stringREF << std::endl;

}
