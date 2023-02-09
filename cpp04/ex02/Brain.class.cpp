#include "main.hpp"


Brain::Brain( void )
{
	this->ideas = new std::string[100]; 
	std::cout << "Constructor brain Called" << std::endl;
	return;

}

Brain::Brain( Brain const & src )
{

	std::cout << "Copy Constructor brain Called" << std::endl;
	*this = src;

	return;

}

std::string *Brain::getIdeas( void) const
{
	return (this->ideas);
}

Brain & Brain::operator=( Brain const & rhs )
{

	std::cout << "Assignment operator brain Called" << std::endl;

	if ( this != &rhs )
	{
		this->ideas = rhs.getIdeas();
	}
	return (*this);
}

Brain::~Brain( void )
{

	delete [] (this->ideas); 
	std::cout << "Destructor brain Called" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, Brain const & i )
{
	std::string	*lol;

	lol = i.getIdeas();
	for (int j = 0; j < 100 && lol[j].length() != 0; j++)
	{
		o  << lol[j];
		if (lol[j + 1].length() != 0)
			o << " ";
	}
	return (o);
}
