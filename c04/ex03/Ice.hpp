#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public: 
		Ice(void);
		Ice(const Ice &rhs);
		Ice& operator=(const &rhs);
		~Ice(void);

		AMateria* clone(void) const;
		void use(ICharachter& target);
};

#endif 
