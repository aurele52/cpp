#ifndef Animal_CLASS_H
# define Animal_CLASS_H

#include "main.hpp"

class Animal
{

	public:

	virtual void	makeSound(void) const = 0;
	virtual std::string	getType(void) const = 0;

	protected:

	std::string	type;

};

#endif
