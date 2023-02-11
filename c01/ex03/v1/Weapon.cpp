#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

std::string&	Weapon::getType(void)
{	
	return (this->_type);
}

void	Weapon::setType(std::string	type)
{
	this->_type = type;
}
