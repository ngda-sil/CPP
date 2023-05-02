#include "Character.hpp"

//Canonical

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character	: Constructor" << std::endl;
}

Character::Character(const Character &rhs)
{
	std::cout << "Character	: Copy Constructor" << std::endl;
	*this = rhs;
}

Character& Character::operator=(const Character &rhs)
{
	std::cout << "Character	: Copy operator" << std::endl;
	_name = rhs._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = rhs._inventory[i];
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character	: Destructor" << std::endl;
}

// Public menmber fonctions

std::string const & Character::getName(void) const
{
	return(_name);
}

void Character::equip(AMateria *m)
{
	// check si la materia existe
	
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m->clone();
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (_inventory[idx] != NULL)
		_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
