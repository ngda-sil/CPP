#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap &rhs);
			ClapTrap& operator=(const ClapTrap &rhs);
			~ClapTrap(void);
	
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

	private:
			std::string 	_name;
			unsigned int	_hitPoints;
			int				_energyPoints;
			int				_attackDamage;
};

#endif
