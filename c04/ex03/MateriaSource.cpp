#include "MateriaSource.hpp"

// Canonical

MateriaSource::MateriaSource(void)
{
	//std::cout << "MateriaSource	: Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_copy[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
//	std::cout << "MateriaSource	: Copy constructor" << std::endl;
	*this = rhs;
}

MateriaSource& MateriaSource::operator=(const MateriaSource	&rhs)
{
//	std::cout << "MateriaSource	: Copy operator" << std::endl;
	/*for (int i = 0; i < 4; i++)
	{
		if (_copy[i] != NULL)
		{
			delete _copy[i];
			_copy[i] = NULL;
		}
		if (rhs._copy[i] != NULL)
			_copy[i] = rhs._copy[i]->clone();
	}*/
	(void) rhs;
	return(*this);
}

MateriaSource::~MateriaSource(void)
{
//	std::cout << "MateriaSource	: Destructor" << std::endl;
	for(int i = 0; i < 4; i++)
		if (_copy[i] != NULL)
			delete _copy[i];
}

// Public Member Functions

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_copy[i] == NULL)
		{
			_copy[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
	 	 if (_copy[i] != NULL && _copy[i]->getType() == type)
				return (_copy[i]->clone());
	}
	return(NULL);
}
