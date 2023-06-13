#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;

class	Intern
{
	public:

		Intern(void);
		Intern(const Intern &rhs);
		Intern& operator=(const Intern &rhs);
		~Intern(void);

		Form*	makeForm(const std::string formName, const std::string target);
};

#endif
