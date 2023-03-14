#include "AAnimal.hpp"

// AAnimal : Canonical

AAnimal::AAnimal(void) : p_type("AAnimal")
{
	std::cout << "AAnimal	: Constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	std::cout << "AAnimal	: Copy constructor" << std::endl;
	*this = rhs;
}

AAnimal& AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << "AAnimal	:Copy operator" << std::endl;
	p_type = rhs.p_type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout<< "AAnimal	: Destructor" << std::endl;
}

// AAnimal : Public member functions

std::string AAnimal::getType(void) const
{
	return (p_type);
}
