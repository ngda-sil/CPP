#include "AMateria.hpp"

// Canonical

AMateria::AMateria(void) : _type("Default")
{
	std::cout << "AMateria	: Constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria	: Constructor whith type	: " << type << std::endl;
}

AMateria::AMateria(const AMateria &rhs)
{
	std::cout << "AMateria	: Copy constructor" << std::endl;
	*this = rhs;
}

AMateria& operator=(const AMateria &rhs)
{
	std::cout << "AMateria	: Copy operator" << std::endl;
	_type = rhs._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria	: Destructor" << std::endl;
}

// Get

std::string const & AMateria::getType(void) const
{
	return (_type);
}

// Public Member Function

void	AMateria::use(ICharacter& target)
{
	 std::cout << "AMateria	: use fonction" << std::endl;
}
