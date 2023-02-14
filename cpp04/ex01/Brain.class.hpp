#ifndef Brain_CLASS_H
# define Brain_CLASS_H

#include "main.hpp"

class Brain
{

	public:

	Brain( void );
	Brain( Brain const & src );
	~Brain( void );

	Brain & operator=( Brain const & rhs );
	void	setIdeas( int i, std::string to);
	std::string *getIdeas( void) const;
	std::string getIdeas( int i) const;

	private:

	std::string *ideas;

};

std::ostream & operator<<( std::ostream & o, Brain const & i );

#endif
