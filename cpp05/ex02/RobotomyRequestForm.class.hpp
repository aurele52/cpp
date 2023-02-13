#ifndef RobotomyRequestForm_CLASS_H
# define RobotomyRequestForm_CLASS_H

#include "main.hpp"

class RobotomyRequestForm : public Form
{

	public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target);
	RobotomyRequestForm( RobotomyRequestForm const & src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
	void	execute(Bureaucrat const &executor) const;

	private:

	std::string	target;

};

std::ostream & operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif
