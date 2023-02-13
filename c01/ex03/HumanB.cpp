#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " attacks with their non-existant weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
