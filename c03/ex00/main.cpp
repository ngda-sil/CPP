#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Jean");
	ClapTrap e;
	ClapTrap b(a);
	ClapTrap c("Janine");
	
	std::cout << std::endl;
	
	a.attack("La societe capitaliste");
	a.takeDamage(15);
	a.takeDamage(15);
	a.beRepaired(2);

	std::cout << std::endl;

	for (int i = 11; i > 0; i--)
		b.attack("ton pere");	
	b.beRepaired(12);
	b.takeDamage(500);

	std::cout << std::endl;
	
	for (int i = 11; i > 0; i--)
		c.takeDamage(1);
	c.attack("nothing");
	
	std::cout << std::endl;
	
	for (int i = 11; i > 0; i--)
		e.beRepaired(1);
	e.takeDamage(12);

	std::cout << std::endl;
	

	return(0);
}
