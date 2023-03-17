#include "Cure.hpp"

// Canonical

Cure::Cure(void) : _type("cure")
{
	std::cout << "Cure	: Constructor" << std::endl;
}

Cure::Cure(const Cure &rhs)
{
	std::cout << "Cure	: Copy constructor" << std::endl;
	*this = rhs;
}

Cure& operator=(const Cure &rhs)
{
	std::cout << "Cure	: Copy operator" << std::endl;
	_type = rhs._type;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure	: Destructor" << std::endl;
}

// Public Member Function

void	Cure::use(ICharacter& target)
{
	 std::cout << "Ice	:  shoots an ice bolt at" << target.name << std::endl;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure());
}
