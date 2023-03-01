#include "WrongAnimal.hpp"

// Canonical

WrongAnimal::WrongAnimal() : type("unknown wrong species"), sound("unknown sound")
{

}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	*this = rhs;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs)
{
	type 	= rhs.type;
	sound 	= rhs.sound;
	
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
}

// Public Member Functions

std::string WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << " says : " << sound << std::endl;
}
