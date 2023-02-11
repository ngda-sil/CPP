#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _Weapon(NULL)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
}
