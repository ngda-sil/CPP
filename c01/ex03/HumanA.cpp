#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _weapon(type)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
}
