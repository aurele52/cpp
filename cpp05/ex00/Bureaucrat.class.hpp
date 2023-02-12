#ifndef Bureaucrat_CLASS_H
# define Bureaucrat_CLASS_H

#include "main.hpp"

class Bureaucrat
{

	public:

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );
	std::string	getName( ) const;
	int	getGrade( ) const;
	void	setGrade( int grade );
	void	incGrade( );
	void	decGrade( );
	Bureaucrat & operator=( Bureaucrat const & rhs );
	class GradeTooHighException: public std::exception
	{
		virtual const char	*what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		virtual const char	*what() const throw();
	};
	private:
	const std::string _name;
	int	_grade;

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i );

#endif
