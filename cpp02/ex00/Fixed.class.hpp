#ifndef Fixed_CLASS_H
# define Fixed_CLASS_H

#include "main.hpp"

class Fixed
{

	public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );
	int	getRawBits( void ) const;
	Fixed & operator=( Fixed const & rhs );
	void	setRawBits( int const raw );
	

	private:

	int	RawBits;
	static const int	bitf = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
