#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	_n = i << _s_point_pos;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	_n = (int)roundf(f * (1 << _s_point_pos));
}

Fixed::Fixed(const Fixed& fixed) : _n(fixed._n)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = fixed.getRawBits();
	return(*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits constructor called" << std::endl;
	_n = raw;
}

int	Fixed::toInt(void) const
{
	return (_n >> _s_point_pos);
}

float	Fixed::toFloat(void) const
{
	return ((float)_n / (1 << _s_point_pos));
}

std::ostream & operator<<(std::ostream & os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}
