#include "MateriaSource.hpp"

// Canonical

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource	: Constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	std::cout << "MateriaSource	: Copy constructor" << std::endl;
	*this = rhs;
}

MateriaSource& MateriaSource::operator=(const MateriaSource	&rhs)
{
	std::cout << "MateriaSource	: Copy operator" << std::endl;
	_copy = rhs._copy;
	return(*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource	: Destructor" << std::endl;
}

// Public Member Functions

void	MateriaSource::learnMateria(AMateria *m)
{
	_copy = m;
}

AMateria* createMateria(std::string const & type)
{
	if ((type == "ice" && _copy._type == "ice")|| (type == "cure" && _copy._type == "cure"))
		return(_copy);
	else
		return(NULL);
}
