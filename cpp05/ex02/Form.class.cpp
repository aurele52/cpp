#include "main.hpp"


Form::Form( )
{}

Form::Form( Form const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

Form & Form::operator=( Form const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_beSigned = rhs.getBeSigned();
		this->_gradeSign = rhs.getGradeSign();
		this->_gradeExec = rhs.getGradeExec();
	}
	return (*this);
}

Form::~Form( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

Form::Form( std::string name, int toSign, int toExec ) : _name(name), _beSigned(0)
{
	std::cout << "Complet Constructor Called" << std::endl;
	if (toSign > 150 || toExec > 150)
		throw Form::GradeTooLowException();
	if (toSign < 1 || toExec < 1)
		throw Form::GradeTooHighException();
	this->_gradeSign = toSign;
	this->_gradeExec = toExec;
}

int	Form::getGradeSign( ) const
{
	return (this->_gradeSign);
}

int	Form::getGradeExec( ) const
{
	return (this->_gradeExec);
}

std::string	Form::getName( ) const
{
	return (this->_name);
}

bool	Form::getBeSigned( ) const
{
	return (this->_beSigned);
}

void	Form::beSigned( const Bureaucrat &bob)
{
	if (bob.getGrade() > this->_gradeSign)
	{
		throw Form::GradeTooLowException();
	}
	else if (this->_beSigned == 1)
	{
		throw Form::AlreadySigned();
	}
	else
		this->_beSigned = 1;
}

const char	*Form::AlreadySigned::what() const throw()
{
	return ("Already Sign");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade to high");
}

const char	*Form::NotSigned::what() const throw()
{
	return ("Not Signed");
}

std::ostream & operator<<( std::ostream & o, Form const & i )
{

	o << i.getName();
	if (i.getBeSigned() == 1)
		o << " is signed and must have " << i.getGradeExec() << "grade to execute" << std::endl;
	if (i.getBeSigned() == 0)
		o << " is not signed and must have " << i.getGradeSign() << " grade to Sign and " << i.getGradeExec() << " to execute" << std::endl;
	return (o);

}
