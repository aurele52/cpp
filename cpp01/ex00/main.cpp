#include <iostream>
#include "Zombie.class.hpp"



Zombie* newZombie( std::string name )
{
	Zombie* ran;

	ran = new Zombie(name);
	return (ran);
}

void randomChump( std::string name )
{
	Zombie	bob(name);
	bob.announce();
}

int	main()
{
	Zombie* bob = newZombie("Bob");

	bob->announce();
	randomChump("George");
	delete (bob);
}
