#include "Dog.hpp"

// Dog : Canonical

Dog::Dog(void)
{
	std::cout << "Dog	: Constructor" << std::endl;
	p_type = "Dog";
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog	: Copy constructor" << std::endl;
	*this = rhs;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog	: Copy operator" << std::endl;
	p_type = rhs.p_type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog	: Destructor" << std::endl;
}

// Dog : Protected member functions

void	Dog::makeSound(void) const
{
	std::cout << p_type << "	: Wouf" << std::endl;
}
