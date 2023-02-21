#ifndef MutantStack_CLASS_H
# define MutantStack_CLASS_H

#include "main.hpp"

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

	MutantStack( void ){}
	MutantStack( MutantStack const & src ) {*this = src;}
	~MutantStack( void ) {}

	MutantStack & operator=( MutantStack const & rhs )
	{
		(void)rhs;
		return (*this);
	};
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin( void ) { return (this->c.begin());}
	iterator	end( void ) { return (this->c.end());}


};

#endif
