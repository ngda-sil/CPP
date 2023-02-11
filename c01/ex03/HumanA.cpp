#include "HumanA.hpp"

HumanB::HumanA(std::string name, Weapon& type) : _name(name), _Weapon(type)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
