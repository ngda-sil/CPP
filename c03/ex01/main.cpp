#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a("Jean");
	ScavTrap b(a);
	ScavTrap c("Janine");
	
	c.guardGate();
	a.attack("La societe capitaliste");
	a.takeDamage(15);
	a.takeDamage(15);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	return(0);
}
