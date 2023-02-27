#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap &rhs);
			ClapTrap& operator=(const ClapTrap &rhs);
			~ClapTrap(void);
	
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

	protected:
			std::string 	_name;
			int				_hitPoints;
			int				_energyPoints;
			int				_attackDamage;
};

#endif
