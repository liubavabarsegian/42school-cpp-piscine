#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_value;
		const static int	_fractionalBits;
	public:
		Fixed(int value);
		Fixed();
		Fixed(const Fixed &obj);
		Fixed&	operator=(const Fixed &obj);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed();
};

#endif