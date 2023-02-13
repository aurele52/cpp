#ifndef ShrubberyCreationForm_CLASS_H
# define ShrubberyCreationForm_CLASS_H

#include "main.hpp"

class ShrubberyCreationForm : public Form
{

	public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target);
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
	void	execute(Bureaucrat const &executor) const;

	private:

	std::string	target;

};

std::ostream & operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif
