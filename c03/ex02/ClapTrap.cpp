#include "ClapTrap.hpp"

// Canonical

ClapTrap::ClapTrap(void) : _name("No name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	_name 			= rhs._name+"_copy";
	_hitPoints 		= rhs._hitPoints;
	_energyPoints 	= rhs._energyPoints;
	_attackDamage	= rhs._attackDamage;

	std::cout << "ClapTrap " << _name << " copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

// Public Member Function 

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints && _energyPoints)
	{
		_energyPoints--;
		
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage !" 
			<< "Hit points : [" << _hitPoints << "] Energy points : ["
			<< _energyPoints << "]" << std::endl;
	}
	else if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " : Not enough hit points ! Hit points : [" 
			<< _hitPoints << "] Energy points : [" << _energyPoints 
			<< "]" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " : Not enough energy points ! Hit points : [" 
			<< _hitPoints << "] Energy points : [" << _energyPoints 
			<< "]" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " Don't attack dead people please ! Hit points : [" 
			<< _hitPoints << "] Energy points : [" << _energyPoints 
			<< "]" << std::endl;
	else 
	{
		if (_hitPoints > amount)
			_hitPoints -= amount;
		else 
			_hitPoints = 0;
		
		std::cout << "ClapTrap " << _name << " took " << amount 
			<< " points of damage ! Hit points : ["
			<< _hitPoints << "] Energy points : [" << _energyPoints
			<< "]" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " Energy level at 0, we can't do anything for you go sleep" << std::endl;
	else 
	{
		_hitPoints += amount;
		_energyPoints--;
		
		std::cout << "ClapTrap " << _name << " received " << amount <<
		" hit points ! Hit points [" << _hitPoints << "] Energy points [" << 
		_energyPoints << "]" << std::endl;
	}
}
