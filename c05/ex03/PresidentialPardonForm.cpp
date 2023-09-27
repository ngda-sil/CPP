#include "PresidentialPardonForm.hpp"

//Canonical
PresidentialPardon::PresidentialPardon(const std::string target) : AForm("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardon::PresidentialPardon(const PresidentialPardon &rhs) : AForm(rhs), _target(rhs._target)
{
}

PresidentialPardon& PresidentialPardon::operator=(const PresidentialPardon &rhs)
{
	//only _signed can be copied
	_signed = rhs.isSigned();

	return(*this);
}

PresidentialPardon::~PresidentialPardon(void)
{
}

// Fonctions membre

void	PresidentialPardon::execute(Bureaucrat const & executor) const
{
	checkPrerequisites(executor.getGrade());
	std::cout << _target << " a été pardonné.e par Zaphod Beeblebrox" << std::endl;
}

AForm* PresidentialPardon::clone(std::string target)
{
	return (new PresidentialPardon(target));
}
