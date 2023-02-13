#ifndef PresidentialPardonForm_CLASS_H
# define PresidentialPardonForm_CLASS_H

#include "main.hpp"

class PresidentialPardonForm : public Form
{

	public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target);
	PresidentialPardonForm( PresidentialPardonForm const & src );
	~PresidentialPardonForm( void );

	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
	void	execute(Bureaucrat const &executor) const;

	private:

	std::string	target;

};

std::ostream & operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif
