#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public: 
		Cure(void);
		Cure(const Cure &rhs);
		Cure& operator=(const Cure &rhs);
		~Cure(void);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);

	private:
		std::string	_type;
};

#endif 
