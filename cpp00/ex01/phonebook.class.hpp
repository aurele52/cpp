#ifndef phonebook_CLASS_H
# define phonebook_CLASS_H
#include "contact.class.hpp"

class phonebook
{

public:
	phonebook( void );
	~phonebook( void );

	void setnbr(int nbr);
	int getnbr( void );
	void printall( void );
	void addcontact( std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret);
private:
	int	nbr;
	contact	contact[8];
};


#endif
