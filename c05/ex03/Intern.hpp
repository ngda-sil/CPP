#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardon;
class RobotomyRequest;
class ShrubberyCreation;

typedef struct	s_AForms
{
	std::string	name;
	AForm* (*ptrToFunc) (const std::string target);
}				t_AForms;

class	Intern
{
	private:
		static const t_AForms _validForms[];

	public:

		Intern(void);
		Intern(const Intern &rhs);
		Intern& operator=(const Intern &rhs);
		~Intern(void);

		AForm*	makeForm(const std::string formName, const std::string target);
};

#endif
