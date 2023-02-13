#include "main.hpp"


ShrubberyCreationForm::ShrubberyCreationForm( void )
{}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : Form("ShrubberyCreationForm", 145, 137),  target(target)
{
	std::cout << "Constructor with target Called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ): Form(src)
{

	std::cout << "Copy Constructor Called" << std::endl;
	return;

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_beSigned = rhs.getBeSigned();
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{

	o << i.getName();
	return (o);

}

void	ShrubberyCreationForm::execute( Bureaucrat const &bob) const
{
	if (bob.getGrade() > this->_gradeExec)
	{
		throw Form::GradeTooLowException();
	}
	else if (this->_beSigned != 1)
	{
		throw Form::NotSigned();
	}
	else
	{
		std::string lol = this->target + "_shrubbery";
		std::ofstream	of(lol.c_str());
		if (!of.is_open())
			std::cerr << "file not open" << std::endl;
		else
			of << "*" << std::endl << "|" << std::endl;
	}
}
