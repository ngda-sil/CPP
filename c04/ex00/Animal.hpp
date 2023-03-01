#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &rhs);
		Animal& operator=(const Animal &rhs);
		~Animal();

		std::string	getType() const;
		void		makeSound() const;
	protected:
		std::string	type;
		std::string	sound;
};

#endif
