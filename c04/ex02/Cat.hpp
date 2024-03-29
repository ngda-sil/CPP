#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(const Cat &rhs);
		Cat& operator=(const Cat &rhs);
		~Cat(void);

		void	makeSound(void) const;

		void	getIdea(int	i) const;
		void	setIdea(int i, std::string str);

	private:
		Brain* _b;
};

#endif
