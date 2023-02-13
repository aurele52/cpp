#ifndef Intern_CLASS_H
# define Intern_CLASS_H

#include "main.hpp"

class Intern
{

	public:

	Intern( void );
	Intern( Intern const & src );
	~Intern( void );
	Form	*retPresidentialPardonForm(std::string target) const;
	Form	*retShrubberyCreationForm(std::string target) const;
	Form	*retRobotomyRequestForm(std::string target) const;
	Form	*makeForm(std::string name, std::string target) const;
	class	NoMatch: public std::exception
	{
		virtual const char	*what() const throw();
	};

	Intern & operator=( Intern const & rhs );

	private:

};

std::ostream & operator<<( std::ostream & o, Intern const & i );

#endif
