#ifndef Fixed_CLASS_H
# define Fixed_CLASS_H

#include "main.hpp"

class Fixed
{

	public:

	Fixed( void );
	Fixed( const int raw );
	Fixed( const float raw );
	Fixed( Fixed const & src );

	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed & operator=( Fixed const & rhs );

	int operator<( Fixed const & i ) const;
	int operator>( Fixed const & i ) const;
	int operator<=( Fixed const & i ) const;
	int operator>=( Fixed const & i ) const;
	int operator!=( Fixed const & i ) const;
	int operator==( Fixed const & i ) const;

	Fixed operator+( Fixed const & i ) const;
	Fixed operator-( Fixed const & i ) const;
	Fixed operator*( Fixed const & i ) const;
	Fixed operator/( Fixed const & i ) const;

	Fixed & operator--( void );
	Fixed & operator++( void );
	Fixed operator--( int );
	Fixed operator++( int );

	static Fixed & min(Fixed & a, Fixed & b );
	static const Fixed & min(const Fixed & a, const Fixed & b );
	static Fixed & max(Fixed & a, Fixed & b );
	static const Fixed & max(const Fixed & a, const Fixed & b );

	private:

	int	RawBits;
	static const int	bitf = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );


#endif
