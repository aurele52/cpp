#include <iostream>
#include <iomanip>
#include "phonebook.class.hpp"

phonebook::phonebook( void )
{

	std::cout << "Constructor Called" << std::endl;
	this->nbr = 0;
	return;

}


phonebook::~phonebook( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

void	phonebook::setnbr(int nbr)
{
	this->nbr = nbr;
}

int	phonebook::getnbr( void )
{
	return (this->nbr);
}

void	phonebook::printall( void )
{
	for (int i = 0; i < this->nbr; i++)
	{
		std::cout << std::setw(10) << this->contact[i].getfirstname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[i].getlastname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[i].getnickname();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[i].getphonenumber();
		std::cout << "|";
		std::cout << std::setw(10) << this->contact[i].getdarkestsecret() << std::endl;
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
