#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0)
{
	_Fraction = 8;
	return;
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
	return (this->_RawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
}
