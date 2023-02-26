#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &rv);
		ClapTrap& operator=(const ClapTrap &rv);
		~ClapTrap(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string 	getName(void);

	private: 
		std::string		_name;
		unsigned int	_hitP;
		unsigned int	_energyP;
		unsigned int	_damage;
};

#endif
