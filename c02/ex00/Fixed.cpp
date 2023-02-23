#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed = fixed.getRawBits();
	return(*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits constructor called" << std::endl;
	_fixed = raw;
}
