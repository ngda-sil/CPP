#include "WrongCat.hpp"

// Canonical

WrongCat::WrongCat()
{
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	*this = rhs;
}

WrongCat&	WrongCat::operator=(const WrongCat &rhs)
{
	type 	= rhs.type;
	sound 	= rhs.sound;
	
	return (*this);
}

WrongCat::~WrongCat()
{
}
