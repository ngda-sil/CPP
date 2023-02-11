#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_Weapon = NULL;
	return;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::setWeapon(Weapon& Weapon)
{
	_Weapon = &Weapon;
}

void	HumanB::attack()
{
	if (!_Weapon)
		std::cout << _name << " attacks with their non-existant weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
}
