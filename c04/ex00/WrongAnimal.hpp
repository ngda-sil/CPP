#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal& operator=(const WrongAnimal &rhs);
		~WrongAnimal();

		std::string	getType() const;
		void		makeSound() const;
	protected:
		std::string	type;
		std::string	sound;
};

#endif
