#include "ClapTrap.hpp"

// Canonical

ClapTrap::ClapTrap(std::string name) : _name(name), _hitP(10), _energyP(10), _damage(0)
{
	std::cout << _name << "Constructor called" std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rv) : _name(rv._name), _hitP(rv._hitP), _energyP(rv._energyP), _damage(rv._damage)
{
	std::cout << _name << "Copy constructor called" std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rv)
{
	_name 	= rv._name;
	_hitP 	= rv._hitP;
	_energyP = rv._energyP;
	_damage = rv._damage;

	return (this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << "Destructor called" std::endl;
}

// Public Member Functions

void	ClapTrap::attack(const std::string &target)
{
	if (_hitP && _energyP)
	{
		target.takeDamage(_damage);
		_energyP--;
		std::cout << "ClapTrap " _name << " attacks " target._name << " causing " << _damage << " points of damage! " << std::endl;
	}
	else
		std::cout << _name << "is low on hit points : " << _hitP << " or is low on energy points :" << _energyP << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitP -= amount;
	std::cout << "ClapTrap " _name << " receives" amount << " damage! "<< " Hit points : " << _hitP << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitP && _energyP)
	{
		_hitP += amount;
		_energyP--;
		std::cout << "ClapTrap " _name << " repares " amount << "hit points. Hit Points : " << _hitP << " Energy points : " << _energyP << std::endl;
	}
	else
		std::cout << _name << "is low on hit points : " << _hitP << " or is low on energy points :" << _energyP << std::endl;
}

// Public Member Functions : Get

std::string	ClapTrap::getName(void)
{
	
}
