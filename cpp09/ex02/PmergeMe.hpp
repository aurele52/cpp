#ifndef PmergeMe_CLASS_H
# define PmergeMe_CLASS_H

#include "main.hpp"

class PmergeMe
{

	public:

	PmergeMe( void );
	PmergeMe( PmergeMe const & src );
	~PmergeMe( void );
	std::vector<float> getVector( void ) const;
	std::vector<float> getVector( void );
	int		getRealnbr( void ) const;
	void	moveback( int lol, int back);
	void	add(char *str);
	void	addnan( void );
	void	pairsort( int step );
	void	issort( void );
	PmergeMe & operator=( const PmergeMe & rhs );

	private:
	std::vector<float> _vector;
	int	_realnbr;

};

std::ostream & operator<<( std::ostream & o, PmergeMe const & i );

#endif
