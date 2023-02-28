#include "FragTrap.hpp"

// Canonical

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
	
	_hitPoints 		= 100;
	_energyPoints 	= 100;
	_attackDamage	= 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
	
	_hitPoints 		= 100;
	_energyPoints 	= 100;
	_attackDamage	= 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Fragtrap " << _name << " destructor called" << std::endl;
}

// Public Member Functions

void	FragTrap::attack(const std::string &target)
{
	if (_hitPoints && _energyPoints)
	{
		_energyPoints--;
		
		std::cout << "FragTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage !" 
			<< "Hit points : [" << _hitPoints << "] Energy points : ["
			<< _energyPoints << "]" << std::endl;
	}
	else if (_hitPoints <= 0)
		std::cout << "FragTrap " << _name << " : Not enough hit points ! Hit points : [" 
			<< _hitPoints << "] Energy points : [" << _energyPoints 
			<< "]" << std::endl;
	else
		std::cout << "FragTrap " << _name << " : Not enough energy points ! Hit points : [" 
			<< _hitPoints << "] Energy points : [" << _energyPoints 
			<< "]" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap "<< _name << " : HighFive ?" << std::endl;
}
