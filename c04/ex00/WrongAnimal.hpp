#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal& operator=(const WrongAnimal &rhs);
		/*virtual*/	~WrongAnimal(void);
		
		std::string	getType(void) const;
		void		makeSound(void) const;
	
	protected:
		std::string	p_type;
};

#endif
