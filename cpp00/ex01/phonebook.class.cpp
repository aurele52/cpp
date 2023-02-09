#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "phonebook.class.hpp"

phonebook::phonebook( void )
{

	this->nbr = 0;
	return;

}


phonebook::~phonebook( void )
{

	return;

}

void	phonebook::setnbr(int nbr)
{
	this->nbr = nbr;
}

int	phonebook::getnbr( void ) const
{
	return (this->nbr);
}

void	phonebook::printall( void ) const
{
	for (int i = 0; i < this->nbr && i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[i].getfirstname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[i].getlastname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[i].getnickname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[i].getphonenumber() << std::endl;
	}
}

void	phonebook::search( void ) const
{
	int	index;
	std::string	lol;

	phonebook::printall();
	std::getline(std::cin, lol);
	if (std::cin.eof())
		return ;
	index = atoi(lol.c_str());
	if ((index <= 0 || index >= 9) ||  index > this->nbr)
		std::cout << "Bad index number" << std::endl;
	else
	{
		index--;
		std::cout << std::setw(10) << index + 1;
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[index].getfirstname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[index].getlastname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[index].getnickname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[index].getphonenumber() << std::endl;
	}	
}

void	phonebook::addcontact( std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret)
{
	this->contact[this->nbr % 8].setfirstname(firstname);
	this->contact[this->nbr % 8].setlastname(lastname);
	this->contact[this->nbr % 8].setnickname(nickname);
	this->contact[this->nbr % 8].setphonenumber(phonenumber);
	this->contact[this->nbr % 8].setdarkestsecret(darkestsecret);
	this->nbr++;
}
