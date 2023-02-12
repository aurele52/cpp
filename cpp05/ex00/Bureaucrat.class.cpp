#include "main.hpp"


Bureaucrat::Bureaucrat( void ) : _name("George")
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

Bureaucrat::Bureaucrat( std::string name, int grades ) : _name(name)
{

//	if (grades < 1)
//		throw (Bureaucrat::GradeTooHighExeption);
//	if (grades > 150)
//		throw (Bureaucrat::GradeTooLowExeption);
	this->_grade = grades;
}
	std::cout << "Constructor Called" << std::endl;
	return;

}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::string	Bureaucrat::getName( ) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade( ) const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade( int grades )
{
	this->_grade = grades;
}

void	Bureaucrat::incGrade( )
{
//	if (this->_grade == 1)
//		throw (Bureaucrat::GradeTooHighExeption);
	this->_grade = this->_grade - 1;
}

void	Bureaucrat::decGrade( )
{
//	if (this->_grade == 150)
//		throw (Bureaucrat::GradeTooLowExeption);
	this->_grade = this->_grade + 1;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i )
{

	o << i.getName() << ", bureaucrat grade " << std::endl;
	return (o);

}
