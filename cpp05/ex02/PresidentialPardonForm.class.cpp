#include "main.hpp"


PresidentialPardonForm::PresidentialPardonForm( void )
{}

PresidentialPardonForm::PresidentialPardonForm( std::string target) : Form("PresidentialPardonForm", 25, 5),  target(target)
{
	std::cout << "Constructor with target Called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ): Form(src)
{

	std::cout << "Copy Constructor Called" << std::endl;
	return;

}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_beSigned = rhs.getBeSigned();
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, PresidentialPardonForm const & i )
{

	o << i.getName();
	return (o);

}

void	PresidentialPardonForm::execute( Bureaucrat const &bob) const
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
		std::cout << this->target << " was forgiven" << std::endl;
	}
}
