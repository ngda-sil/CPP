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
	std::cout << p_type << "Animal	:Copy operator" << std::endl;
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

// Cat : Canonical

Cat::Cat(void)
{
	std::cout << "Cat	: Constructor" << std::endl;
	p_type = "Cat";
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat	: Copy constructor" << std::endl;
	*this = rhs;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat	: Copy operator" << std::endl;
	p_type = rhs.p_type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat	: Destructor" << std::endl;
}

// Cat : Protected member functions

void	Cat::makeSound(void) const
{
	std::cout << p_type << "	: Miaou" << std::endl; 
}
