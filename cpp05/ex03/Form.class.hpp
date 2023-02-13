#ifndef Form_CLASS_H
# define Form_CLASS_H

#include "main.hpp"

class Form
{

	public:

	Form( Form const & src );
	virtual ~Form( void );

	Form( std::string name, int toSign, int toExec );
	int	getGradeSign( ) const;
	int	getGradeExec( ) const;
	std::string	getName( ) const;
	bool getBeSigned( ) const;
	void	beSigned( const Bureaucrat &bob ) ;
	virtual void	execute( Bureaucrat const &bob) const = 0;
	Form & operator=( Form const & rhs );

	
	class	NotSigned: public std::exception
	{
		virtual const char	*what() const throw();
	};
	class	GradeTooLowException: public std::exception
	{
		virtual const char	*what() const throw();
	};

	class	AlreadySigned: public std::exception
	{
		virtual const char	*what() const throw();
	};
	class	GradeTooHighException: public std::exception
	{
		virtual const char	*what() const throw();
	};

	protected:

	Form( void );
	const std::string _name;
	bool	_beSigned;
	int		_gradeSign;
	int		_gradeExec;

};

std::ostream & operator<<( std::ostream & o, Form const & i );

#endif
