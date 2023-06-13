#include "Intern.hpp"

// Canonical

Intern::Intern(void)
{
}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern& Intern::operator=(const Intern &rhs)
{
	(void) rhs;
	return(*this);
}

Intern::~Intern(void)
{
}

// Fonction membre

Form*	Intern::makeForm(const std::string formName, const std::string target)
{
	std::string tab[3] = 
	{ 
		"presidential pardon", 
		"shrubbery creation", 
		"robotomy request"
	};

	int i = -1; 

	while (++i < 4)
		if (tab[i] == formName)
			break;

	switch(i)
	{
		case 0 :
				return(new PresidentialPardon(target));
		case 1 :
				return(new ShrubberyCreation(target));
		case 2 :
				return(new RobotomyRequest(target));
		
		default :
				std::cout << "Form name unknown" << std::endl;
				return(NULL);
	}
}
