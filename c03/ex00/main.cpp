#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Henry");
	ClapTrap	b("Marc");
	ClapTrap	c("Laurine");

	for (int i = 10; i > 0; i--)
	{
		a.attack(b);
	}

	return (0);
}
