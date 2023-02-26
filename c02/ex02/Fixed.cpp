#include "Fixed.hpp"

// Constructor 

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


// Comparison

bool  Fixed::operator>(const Fixed &f) const
{
	return (this->toFloat() > f.toFloat());
}

bool  Fixed::operator<(const Fixed &f) const
{
	return (this->toFloat() < f.toFloat());
}

bool  Fixed::operator>=(const Fixed &f) const
{
	return (this->toFloat() >= f.toFloat());
}

bool  Fixed::operator<=(const Fixed &f) const
{
	return (this->toFloat() <= f.toFloat());
}

bool  Fixed::operator==(const Fixed &f) const
{
	return (this->toFloat() == f.toFloat());
}

bool  Fixed::operator!=(const Fixed &f) const
{
	return (this->toFloat() != f.toFloat());
}


// Arithmetic

Fixed Fixed::operator=(const Fixed &f)
{
	_value = f.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &f) const
{
	return (this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed &f) const
{
	return (this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f) const
{
	return (this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f) const
{
	return (this->toFloat() / f.toFloat());
}


// Crementation

Fixed& Fixed::operator++(void)
{
	//_value += (1 << _s_pos_point); vrai +1
	
	_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int i)
{
	(void) i;
	Fixed	tmp;
	
	tmp = *this;
	++(*this);
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	// _value -= (1 << _s_pos_point); vrai -1 
	
	_value -= 1; 
	return (*this);
}

Fixed Fixed::operator--(int i)
{
	(void) i;
	Fixed	tmp;
	
	tmp = *this;
	--(*this);
	return (tmp);
}


// Destructor

Fixed::~Fixed(void)
{
}


// Member Functions : Comparison

float Fixed::min(Fixed &f1, Fixed &f2)
{
	float a = f1.toFloat();
	float b = f2.toFloat();

	return ((a < b) ? a : b);
}

float Fixed::min(const Fixed &f1, const Fixed &f2)
{
	float a = f1.toFloat();
	float b = f2.toFloat();

	return ((a < b) ? a : b);
}

float Fixed::max(Fixed &f1, Fixed &f2)
{
	float a = f1.toFloat();
	float b = f2.toFloat();

	return ((a > b) ? a : b);
}

float Fixed::max(const Fixed &f1, const Fixed &f2)
{
	float a = f1.toFloat();
	float b = f2.toFloat();

	return ((a > b) ? a : b);
}


// Member Functions : Conversion

int	Fixed::toInt(void) const
{
	return (_value >> 8);
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _s_pos_point));
}


// Member Functions : Get & Set

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

// Non Member Functions 

std::ostream& operator<<(std::ostream& o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}
