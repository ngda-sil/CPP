#include "Brain.hpp"

// Brain : Canonical

Brain::Brain(void)
{
	std::cout << "Brain	: Constructor" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain	: Copy constructor" << std::endl;
	*this = rhs;
}

Brain& Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain	: Copy operator" << std::endl;
	
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain	: Destructor" << std::endl;
}

// Brain : Get & Set

std::string	Brain::getIdea(int i)
{
	if (i < 100)
		return (ideas[i]);
	else
		return("This idea doesn't exist");
}

void	Brain::setIdea(int i, std::string str)
{
	if (i < 100)
		ideas[i] = str;
	else
		std::cout << "Cannot access this part of the brain" << std::endl;
}
