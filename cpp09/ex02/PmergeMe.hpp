#ifndef PmergeMe_CLASS_H
# define PmergeMe_CLASS_H

#include <memory>
#include <ctime>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>
#include <cmath>

class PmergeMe
{

	public:

	PmergeMe( void );
	PmergeMe( PmergeMe const & src );
	~PmergeMe( void );
	std::vector<float> getVector( void ) const;
	std::vector<float> getVector( void );
	std::deque<float> getDeque( void ) const;
	std::deque<float> getDeque( void );
	void	printDeque( void );
	int		getRealnbr( void ) const;
	void	moveback( int lol, int back);
	void	moveback2( int lol, int back);
	void	add(char *str);
	void	add2(char *str);
	void	addnan( void );
	void	addnan2( void );
	void	pairsort( int step );
	void	pairsort2( int step );
	void	issort( void );
	void	issort2( void );
	PmergeMe & operator=( const PmergeMe & rhs );

	private:
	std::deque<float> _deque;
	std::vector<float> _vector;
	int	_realnbr;

};

std::ostream & operator<<( std::ostream & o, PmergeMe const & i );

#endif
