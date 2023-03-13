#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal &rhs);
		Animal& operator=(const Animal &rhs);
		virtual ~Animal(void);

		std::string 	getType(void) const;
		virtual void	makeSound(void) const;
	
	protected:
		std::string	p_type;
};

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &rhs);
		Dog& operator=(const Dog &rhs);
		~Dog(void);

		void	makeSound(void) const;
};

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &rhs);
		Cat& operator=(const Cat &rhs);
		~Cat(void);

		void	makeSound(void) const;
};

#endif
