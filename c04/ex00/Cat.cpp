#include "Cat.hpp"

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
