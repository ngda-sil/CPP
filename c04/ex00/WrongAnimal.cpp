#include "WrongAnimal.hpp"

// WrongAnimal : Canonical

WrongAnimal::WrongAnimal(void) : p_type("WrongAnimal")
{
	std::cout << "WrongAnimal	: Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal	: Copy constructor" << std::endl;
	*this = rhs;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << p_type << "WrongAnimal	: Copy operator" << std::endl;
	p_type = rhs.p_type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout<< "WrongAnimal	: Destructor" << std::endl;
}

// WrongAnimal : Public member functions

std::string WrongAnimal::getType(void) const
{
	return (p_type);
}

// WrongAnimal : Protected member functions

void	WrongAnimal::makeSound(void) const 
{
	std::cout << p_type << "	: WrongAnimal sound" << std::endl; 
}
