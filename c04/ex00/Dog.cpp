#include "Dog.hpp"

// Canonical

Dog::Dog() : Animal()
{ 
	type = "Dog";
	sound = "Wouaf";
}

Dog::Dog(const Dog &rhs)
{
	*this = rhs;
}

Dog&	Dog::operator=(const Dog &rhs)
{
	type 	= rhs.type;
	sound 	= rhs.sound;
	
	return (*this);
}

Dog::~Dog()
{
}
