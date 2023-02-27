#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Jean");
	ClapTrap b(a);
	ClapTrap c("Janine");
	
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
