#include "Intern.hpp"

// Canonical

/* the _validForms array is defined and initialized in the Intern.cpp file, 
	and it can be accessed by all functions in that file. Since it is a static member of the Intern class, 
	it is shared among all instances of the class and accessible globally within the Intern.cpp file. 
	This ensures that you have a single copy of the array, and it is safely shared among all parts of your code 
	that use the Intern class.*/

const t_AForms Intern::_validForms[] = 
{ 	
	{"presidential pardon", &PresidentialPardon::clone},
	{"shrubbery creation", &ShrubberyCreation::clone},
	{"robotomy request", &RobotomyRequest::clone}
};

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

AForm*	Intern::makeForm(const std::string formName, const std::string target)
{
	for (int i = 0; i < 3; i++)
		if (formName == _validForms[i].name)
		{
			std::cout << "Intern creates " << formName << std::endl; 
			return (_validForms[i].ptrToFunc(target));
		}
	std::cout << RED << "Intern can't create " << formName << " because " << RESET;
	throw AForm::FormDoesNotExistException();
}

