#include "Character.hpp"

//Canonical

Character::Character(std::string name) : _name(name)
{
//	std::cout << "Character	: Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &rhs)
{
//	std::cout << "Character	: Copy Constructor" << std::endl;
	*this = rhs;
}

Character& Character::operator=(const Character &rhs)
{
//	std::cout << "Character	: Copy operator" << std::endl;
	_name = rhs._name;
	/*for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		if (rhs._inventory[i] != NULL)
			_inventory[i] = rhs._inventory[i]->clone();
	}*/ 
	return (*this);
}

Character::~Character(void)
{
//	std::cout << "Character	: Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
}

// Public menmber fonctions

std::string const & Character::getName(void) const
{
	return(_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (_inventory[idx] != NULL)
			_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
	}
}
