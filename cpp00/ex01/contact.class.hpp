#ifndef contact_CLASS_H
# define contact_CLASS_H


class contact
{

public:
	contact( void );
	~contact( void );

	void setfirstname(std::string) ;
	void setlastname(std::string) ;
	void setnickname(std::string) ;
	void setphonenumber(std::string) ;
	void setdarkestsecret(std::string) ;

	std::string getfirstname(void) const;
	std::string getlastname(void) const;
	std::string getnickname(void) const;
	std::string getphonenumber( void ) const;
	std::string getdarkestsecret( void ) const;

private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
};


#endif
