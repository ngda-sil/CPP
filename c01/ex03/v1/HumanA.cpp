#include "HumanA.hpp"

HumainA::HumainA(std::string name, Weapon WeaponType)
{
	this->_name = name;
	this->_WeaponA = WeaponType;
	return;
}

HumainA::~HumainA()
{
	return;
}

void	HumainA::attack()
{
	std::cout <<_name << "attacks with their " << _WeaponA.getType();
}
