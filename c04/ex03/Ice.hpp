#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{
	public: 
		Ice(void);
		Ice(const Ice &rhs);
		Ice& operator=(const Ice &rhs);
		~Ice(void);

		AMateria* clone(void) const;
		void use(ICharacter& target);

	private:
		std::string	_type;
};

#endif 
