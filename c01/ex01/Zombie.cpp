#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been successfully destroyed\n";
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
