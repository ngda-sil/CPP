#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class	AMateria
{
	public:
		Amateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &rhs);
		AMateria& operator=(const & rhs);
		virtual ~AMateria(void);

		std::string const & getType(void);
	
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	_type;
};

#endif 
