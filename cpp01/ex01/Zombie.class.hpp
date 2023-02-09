#ifndef Zombie_CLASS_H
# define Zombie_CLASS_H


class Zombie
{

public:
	Zombie( std::string );
	Zombie();
	~Zombie( void );
	void	announce( void ) const;
	std::string	getname( void ) const ;
	void	setname( std::string name ) ;
private:
	std::string name;
};


#endif
