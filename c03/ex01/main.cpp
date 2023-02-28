#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
		ScavTrap a("Jean");
		ScavTrap e;
		ScavTrap b(a);
		ScavTrap c("Janine");
	
		std::cout << std::endl;
	
		a.attack("La societe capitaliste");
		a.takeDamage(15);
		a.takeDamage(15);
		a.beRepaired(2);
		a.guardGate();

		std::cout << std::endl;

		for (int i = 51; i > 0; i--)
			b.attack("ton pere");	
		b.beRepaired(12);
		b.takeDamage(500);

		std::cout << std::endl;
	
		for (int i = 6; i > 0; i--)
			c.takeDamage(100);
		c.attack("nothing");
	
		std::cout << std::endl;
	
		for (int i = 3; i > 0; i--)
			e.beRepaired(1);
		e.takeDamage(104);

		std::cout << std::endl;
		std::cout << std::endl;
	}
	
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

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
	}

	return(0);
}
