#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string	name, Weapon& type);
		~HumanA();
		
		void	attack();
	
	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
