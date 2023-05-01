#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class	AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &rhs);
		AMateria& operator=(const AMateria& rhs);
		virtual ~AMateria(void);

		std::string const & getType(void) const;
	
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	_type;
};

#endif 
