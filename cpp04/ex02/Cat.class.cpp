#include "main.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Constructor Cat Called" << std::endl;
	this->brain = new Brain;
	return;

}

Cat::Cat( Cat const & src ) : Animal(src)
{

	std::cout << "Copy Constructor Cat Called" << std::endl;
	*this = src;
	this->brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->brain->setIdeas(i, src.getBrain()->getIdeas(i));

	return;

}

Cat & Cat::operator=( Cat const &rhs )
{

	std::cout << "Assignment operator Cat Called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->brain = new Brain;
		for (int i = 0; i < 100; i++)
			this->brain->setIdeas(i, rhs.getBrain()->getIdeas(i));
	}
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << *this << " : miaou" << std::endl;
}

Cat::~Cat( void )
{

	std::cout << "Destructor Called Cat" << std::endl;
	delete this->brain;
	return;

}

std::ostream & operator<<( std::ostream & o, Cat const & i )
{

	o << i.getType();
	return (o);

}
