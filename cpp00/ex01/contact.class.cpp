#include <iostream>
#include "contact.class.hpp"


contact::contact( void )
{

	return;

}


contact::~contact( void )
{

	return;

}


void contact::setfirstname(std::string str)
{
	if (str.length() > 9)
	{
		str[9] = '.';
		str.resize(10);
	}
	this->firstname = str;
}

void contact::setlastname(std::string str)
{
	if (str.length() > 9)
	{
		str[9] = '.';
		str.resize(10);
	}
	this->lastname = str;
}

void contact::setnickname(std::string str)
{
	if (str.length() > 9)
	{
		str[9] = '.';
		str.resize(10);
	}
	this->nickname = str;
}

void contact::setphonenumber(std::string str)
{
	if (str.length() > 9)
	{
		str[9] = '.';
		str.resize(10);
	}
	this->phonenumber = str;
}

void contact::setdarkestsecret(std::string str)
{
	if (str.length() > 9)
	{
		str[9] = '.';
		str.resize(10);
	}
	this->darkestsecret = str;
}

std::string contact::getfirstname(void) const
{
	return (this->firstname);
}

std::string contact::getlastname(void) const
{
	return (this->lastname);
}

std::string contact::getnickname(void) const
{
	return (this->nickname);
}

std::string contact::getphonenumber( void ) const
{
	return (this->phonenumber);
}

std::string contact::getdarkestsecret( void ) const
{
	return (this->darkestsecret);
}
