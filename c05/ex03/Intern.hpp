#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;
class PresidentialPardon;
class RobotomyRequest;
class ShrubberyCreation;

typedef struct	s_Forms
{
	std::string	name;
	Form* (*ptrToFunc) (const std::string target);
}				t_Forms;

class	Intern
{
	public:

		Intern(void);
		Intern(const Intern &rhs);
		Intern& operator=(const Intern &rhs);
		~Intern(void);

		Form*	makeForm(const std::string formName, const std::string target);

	private:
		static const t_Forms _validForms[];
};

#endif
