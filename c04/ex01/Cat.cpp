#include "Cat.hpp"

// Cat : Canonical

Cat::Cat(void)
{
	std::cout << "Cat	: Constructor" << std::endl;
	p_type = "Cat";
	_b = new Brain();
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat	: Copy constructor" << std::endl;
	_b = new Brain();
	*this = rhs;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat	: Copy operator" << std::endl;
	p_type = rhs.p_type;
	*_b = *rhs._b;
	return (*this);
}

Cat::~Cat(void)
{
	delete _b;
	std::cout << "Cat	: Destructor" << std::endl;
}

// Cat : Public member functions

void	Cat::makeSound(void) const
{
	std::cout << p_type << "	: Miaou" << std::endl;
}

void	Cat::getIdea(int i) const
{
	std::cout << "Idea [" << i << "]: " << _b->ideas[i] << std::endl;
}

void	Cat::setIdea(int i, std::string str)
{
	_b->ideas[i] = str;
}
