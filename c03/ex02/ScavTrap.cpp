#include "ScavTrap.hpp"

// Canonical

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
	
	_hitPoints 		= 100;
	_energyPoints 	= 50;
	_attackDamage	= 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
	
	_hitPoints 		= 100;
	_energyPoints 	= 50;
	_attackDamage	= 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scavtrap " << _name << " destructor called" << std::endl;
}

// Public Member Functions

void	ScavTrap::attack(const std::string &target)
{
	if (_hitPoints && _energyPoints)
	{
		_energyPoints--;
		
		std::cout << "ScavTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage !" 
			<< "Hit points : [" << _hitPoints << "] Energy points : ["
			<< _energyPoints << "]" << std::endl;
	}
	else if (_hitPoints <= 0)
		std::cout << "ScavTrap " << _name << " : Not enough hit points ! Hit points : [" 
			<< _hitPoints << "] Energy points : [" << _energyPoints 
			<< "]" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " : Not enough energy points ! Hit points : [" 
			<< _hitPoints << "] Energy points : [" << _energyPoints 
			<< "]" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScaveTrap "<< _name << " vient d'entrer en mode Gate keeper" << std::endl;
}
