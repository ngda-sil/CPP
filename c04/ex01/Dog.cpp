#include "Dog.hpp"

// Dog : Canonical

Dog::Dog(void)
{
	std::cout << "Dog	: Constructor" << std::endl;
	p_type = "Dog";
	_b = new Brain();
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog	: Copy constructor" << std::endl;
	_b = new Brain();
	*this = rhs;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog	: Copy operator" << std::endl;
	p_type = rhs.p_type;
	*_b = *rhs._b;
	return (*this);
}

Dog::~Dog(void)
{
	delete _b;
	std::cout << "Dog	: Destructor" << std::endl;
}

// Dog : Public  member functions

void	Dog::makeSound(void) const
{
	std::cout << p_type << "	: Wouf" << std::endl;
}

void	Dog::getIdea(int i) const
{
	std::cout << "Idea [" << i << "]: " << _b->ideas[i] << std::endl;
}

void	Dog::setIdea(int i, std::string str)
{
	_b->ideas[i] = str;
}

