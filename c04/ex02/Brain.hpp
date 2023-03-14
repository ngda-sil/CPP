#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &rhs);
		Brain& operator=(const Brain &rhs);
		~Brain(void);	

		std::string ideas[100];
};

#endif
