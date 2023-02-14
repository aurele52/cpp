#include "main.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Constructor Dog Called" << std::endl;
	this->brain = new Brain;
	return;

}

Dog::Dog( Dog const & src ) : Animal(src)
{

	std::cout << "Copy Constructor Dog Called" << std::endl;
	*this = src;
	this->brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->brain->setIdeas(i, src.getBrain()->getIdeas(i));

	return;

}

Dog & Dog::operator=( Dog const &rhs )
{

	std::cout << "Assignment operator Dog Called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->brain = new Brain;
		for (int i = 0; i < 100; i++)
			this->brain->setIdeas(i, rhs.getBrain()->getIdeas(i));
	}
	return (*this);
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << *this << " : wouaf" << std::endl;
}

Dog::~Dog( void )
{

	std::cout << "Destructor Called Dog" << std::endl;
	delete this->brain;
	return;

}

std::ostream & operator<<( std::ostream & o, Dog const & i )
{

	o << i.getType();
	return (o);

}
