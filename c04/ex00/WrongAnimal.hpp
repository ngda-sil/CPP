#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal& operator=(const WrongAnimal &rhs);
		~WrongAnimal(void);
		
		std::string	getType(void) const;
		void		makeSound(void) const;
	
	protected:
		std::string	p_type;
};

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &rhs);
		WrongCat& operator=(const WrongCat &rhs);
		~WrongCat(void);
		
		void	makeSound(void) const;
};

#endif
