#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal &rhs);
		AAnimal& operator=(const AAnimal &rhs);
		virtual ~AAnimal(void);

		std::string 	getType(void) const;
		virtual void	makeSound(void) const = 0;
	
	protected:
		std::string	p_type;
};

#endif
