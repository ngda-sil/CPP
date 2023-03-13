#include "Animal.hpp"

// Animal : Canonical

Animal::Animal(void) : p_type("Animal")
{
	std::cout << "Animal	: Constructor" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Animal	: Copy constructor" << std::endl;
	*this = rhs;
}

Animal& Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal	:Copy operator" << std::endl;
	p_type = rhs.p_type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout<< "Animal	: Destructor" << std::endl;
}

// Animal : Public member functions

std::string Animal::getType(void) const
{
	return (p_type);
}

// Animal : Protected member functions

void	Animal::makeSound(void) const 
{
	std::cout << p_type << "	: Animal sound" << std::endl; 
}

