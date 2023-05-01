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

Cure& Cure::operator=(const Cure &rhs)
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

AMateria*	Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	 std::cout << "Cure	: * heals* " << target.name << "'s wounds *" << std::endl;
}


