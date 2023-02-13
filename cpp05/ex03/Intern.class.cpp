#include "main.hpp"


Intern::Intern( void )
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

Intern::Intern( Intern const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

Intern & Intern::operator=( Intern const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
	}
	return (*this);
}

Intern::~Intern( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

const char	*Intern::NoMatch::what() const throw()
{
	return ("Name no match with any Form");
}

Form	*Intern::retPresidentialPardonForm(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::retShrubberyCreationForm(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}
Form	*Intern::retRobotomyRequestForm(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

std::ostream & operator<<( std::ostream & o, Intern const & i )
{

	(void)i;
	return (o);

}

Form	*Intern::makeForm(std::string name, std::string target) const
{
	const std::string lol[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++)
	{
		if (lol[i] == name)
		{
			switch (i)
			{
				case 0:
					return (this->retRobotomyRequestForm(target));
				case 1:
					return (this->retShrubberyCreationForm(target));
				case 2:
					return (this->retPresidentialPardonForm(target));
			}
		}
	}
	std::cerr << "Wrong Form Name" << std::endl;
	throw NoMatch();
}
