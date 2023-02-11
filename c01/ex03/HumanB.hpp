#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& Weapon);
		void	attack();
	
	private:
		std::string	_name;
		Weapon*		_Weapon;
};

#endif
