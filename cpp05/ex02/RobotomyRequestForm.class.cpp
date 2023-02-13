#include "main.hpp"


RobotomyRequestForm::RobotomyRequestForm( void )
{}

RobotomyRequestForm::RobotomyRequestForm( std::string target) : Form("RobotomyRequestForm", 72, 45),  target(target)
{
	std::cout << "Constructor with target Called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ): Form(src)
{

	std::cout << "Copy Constructor Called" << std::endl;
	return;

}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_beSigned = rhs.getBeSigned();
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, RobotomyRequestForm const & i )
{

	o << i.getName();
	return (o);

}

void	RobotomyRequestForm::execute( Bureaucrat const &bob) const
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
		
		srand (time(NULL));
		if (rand() % 2)
			std::cout << this->target << " was Robotized" << std::endl;
		else
			std::cout << "Echec" << std::endl;
	}
}
