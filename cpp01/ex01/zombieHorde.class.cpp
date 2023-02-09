#include <iostream>
#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Bob = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Bob[i].setname(name);
	}
	return (Bob);
}
