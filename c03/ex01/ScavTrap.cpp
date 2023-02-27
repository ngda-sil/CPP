#include "ScavTrap.hpp"

// Canonical

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scavtrap destructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scavtrap " << _name << " destructor called" << std::endl;
}

// Public Member Functions
//
void	ScavTrap::attack(const std::string &target)
{
	if (_hitPoints && _energyPoints)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target <<
		", causing " << _attackDamage << " points of damage !" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout << "Not enough hit points" << std::cout;
	else
		std::cout << "Not enough energy point" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScaveTrap "<< _name << " vient d'entrer en mode Gate keeper" << std::cout;
}
