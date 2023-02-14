#include "main.hpp"


Brain::Brain( void )
{
	this->ideas = new std::string[100]; 
	std::cout << "Constructor brain Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea";

	return;

}

Brain::Brain( Brain const & src )
{

	std::cout << "Copy Constructor brain Called" << std::endl;
	*this = src;

	return;

}

void	Brain::setIdeas( int i , std::string to)
{
	this->ideas[i] = to;
}

std::string Brain::getIdeas( int i) const
{
	return (this->ideas[i]);
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
