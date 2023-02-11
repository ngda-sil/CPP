#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumainA
{
	public:
		HumainA(std::string name, Weapon WeaponType);
		~HumainA();
		void attack(void);	
	
	private:
		Weapon		_WeaponA;
		std::string	_name;
};

#endif
