#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		
		virtual	~ICharacter() {}
		
		virtual	std::string const & getName() const = 0;

		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(const Character &rhs);
		Character& operator=(const Character& rhs);
		~Character(void);

		std::string const & getName(void) const;
		
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
	
	private:
		std::string	_name;
		AMateria* 	_inventory[4];
};

#endif
