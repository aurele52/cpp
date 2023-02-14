#include "main.hpp"

int	main()
{
	try
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		Bureaucrat bob("Bob", 1);
		std::cout << bob;
		RobotomyRequestForm arg("arbre");
		arg.beSigned(bob);
		arg.execute(bob);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		Intern	Jean;
		Form	*lol = Jean.makeForm("ShrubberynForm", "QWE");
		lol->beSigned(bob);
		lol->execute(bob);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		delete lol;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
}
