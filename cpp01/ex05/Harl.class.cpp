#include <iostream>
#include "Harl.class.hpp"


Harl::Harl( void )
{

	std::cout << "Constructor Called" << std::endl;
	return;

}


Harl::~Harl( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

void Harl::debug( void )
{
	std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error( void )
{
	std::cout << "his is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void	(Harl::*fct[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	msg[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (msg[i] == level)
			(this->*(fct[i]))();
	}
}
