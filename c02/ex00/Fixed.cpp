#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0), _raw(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) : _fixed(fixed._fixed), _raw(fixed._raw)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;

	_fixed = fixed.getRawBits();
	fixed.setRawBits(8);
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
	_raw = raw;
}
