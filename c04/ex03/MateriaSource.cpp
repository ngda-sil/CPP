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
	for (int i = 0; i < 4; i++)
		_copy[i] = rhs._copy[i];
	return(*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource	: Destructor" << std::endl;
}


// Get

std::string MateriaSource::getCopyType(void)
{
	return(_copy[0]->getType());
}

// Public Member Functions

void MateriaSource::learnMateria(AMateria *m)
{
	// check si la materia existe
	for (int i = 0; i < 4; i++)
	{
		if (_copy[i] == NULL)
		{
			_copy[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (type == _copy[i]->getType())
			return (_copy[i]->clone());	
	return(NULL);
}
