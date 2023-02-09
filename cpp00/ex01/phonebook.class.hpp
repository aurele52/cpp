#ifndef phonebook_CLASS_H
# define phonebook_CLASS_H
#include "contact.class.hpp"

class phonebook
{

public:
	phonebook( void );
	~phonebook( void );

	void setnbr(int nbr);
	int getnbr( void )const;
	void search( void ) const;
	void addcontact( std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret);
private:
	int	nbr;
	class contact	contact[8];
	void printall( void ) const;
};


#endif
