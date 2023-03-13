#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &rhs);
		Dog& operator=(const Dog &rhs);
		~Dog(void);

		void	makeSound(void) const;

		void	getIdea(int	i) const;
		void	setIdea(int i, std::string str);

	private:
		Brain*	_b;
};

#endif
