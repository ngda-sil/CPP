#include "Animal.hpp"

// Canonical

Animal::Animal() : type("unknown species"), sound("unknown sound")
{

}

Animal::Animal(const Animal &rhs)
{
	*this = rhs;
}

Animal&	Animal::operator=(const Animal &rhs)
{
	type 	= rhs.type;
	sound 	= rhs.sound;
	
	return (*this);
}

Animal::~Animal()
{
}

// Public Member Functions

std::string Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << type << " says : " << sound << std::endl;
}
