#include "Fixed.hpp"

Fixed::Fixed() : _rawbits(0)
{
	_Fraction = 8;
}

Fixed::Fixed(Fixed const & src)
{
	return;
}

Fixed::Fixed&	operator=(Fixed const & rhs)
{
	return (this);
}

Fixed::~Fixed()
{
	return;
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawbits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawits = raw;
}
