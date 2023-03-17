#include "Ice.hpp"

// Canonical

Ice::Ice(void) : _type("ice")
{
	std::cout << "Ice	: Constructor" << std::endl;
}

Ice::Ice(const Ice &rhs)
{
	std::cout << "Ice	: Copy constructor" << std::endl;
	*this = rhs;
}

Ice& operator=(const Ice &rhs)
{
	std::cout << "Ice	: Copy operator" << std::endl;
	_type = rhs._type;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice	: Destructor" << std::endl;
}

// Public Member Function

void	Cure::use(ICharacter& target)
{
	 std::cout << "heals " << target.name << "'s wounds" << std::endl;
}

AMateria* Ice::clone(void) const
{
	return(new Ice());
}
