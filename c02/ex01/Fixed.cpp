#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(const Fixed &f)
{
	_value = f.getRawBits();
}

Fixed::Fixed(const int i)
{
	_value = i << _s_pos_point;
}

Fixed::Fixed(const float f)
{
	_value = roundf(f * (1 << _s_pos_point));
}

Fixed Fixed::operator=(const Fixed &f)
{
	_value = f.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
}

int	Fixed::toInt(void) const
{
	return (_value >> 8);
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _s_pos_point));
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

std::ostream& operator<<(std::ostream& o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}
