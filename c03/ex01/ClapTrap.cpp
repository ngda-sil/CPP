#include "ClapTrap.hpp"

// Canonical

/*ClapTrap(void) : _name(NULL), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << " constructor called" << std::endl;
}*/

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	_name 			= rhs._name;
	_hitPoints 		= rhs._hitPoints;
	_energyPoints 	= rhs._energyPoints;
	_attackDamage	= rhs._attackDamage;

	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " destructor called" << std::endl;
}

// Public Member Function 

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints && _energyPoints)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target <<
		", causing " << _attackDamage << " points of damage !" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout << "Not enough hit points" << std::cout;
	else
		std::cout << "Not enough energy point" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
		std::cout << "Don't attack dead people please" << std::endl;
	else 
	{
		if ((_hitPoints - amount) < 0)
			_hitPoints -= amount;
		else 
			_hitPoints = 0;
		
		std::cout << _name << " took " << amount << " points of damage ! Hit points : ["
			<< _hitPoints << "] Energy points : [" << _energyPoints << "]" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
		std::cout << "Energy level at 0, we can't do anything for you go sleep" 
			<< std::endl;
	else 
	{
		_hitPoints += amount;
		_energyPoints--;
		
		std::cout << "ClapTrap " << _name << " received " << amount <<
		" hit points ! Hit points [" << _hitPoints << "] Energy points [" << 
		_energyPoints << "]" << std::endl;
	}
}
