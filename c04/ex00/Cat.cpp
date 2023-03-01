#include "Cat.hpp"

// Canonical

Cat::Cat()
{
	type = "Cat";
	sound = "Miaou";

}

Cat::Cat(const Cat &rhs)
{
	*this = rhs;
}

Cat&	Cat::operator=(const Cat &rhs)
{
	type 	= rhs.type;
	sound 	= rhs.sound;
	
	return (*this);
}

Cat::~Cat()
{
}
