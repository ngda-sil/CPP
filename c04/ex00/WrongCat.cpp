#include "WrongCat.hpp"

// WrongCat : Canonical

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat	: Constructor" << std::endl;
	p_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "WrongCat	: Copy constructor" << std::endl;
	*this = rhs;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat	: Copy operator" << std::endl;
	p_type = rhs.p_type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat	: Destructor" << std::endl;
}

// WrongCat : Protected member functions

void	WrongCat::makeSound(void) const
{
	std::cout << p_type << "	: Miaou" << std::endl; 
}
