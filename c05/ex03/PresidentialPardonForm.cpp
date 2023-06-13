#include "PresidentialPardonForm.hpp"

//Canonical
PresidentialPardon::PresidentialPardon(const std::string target) : Form("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardon::PresidentialPardon(const PresidentialPardon &rhs) : Form(rhs), _target(rhs._target)
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
	std::cout << _target << " a été pardonné.e par Zaphod Beeblebrox" << std::endl;
	std::cout << executor.getName() << " executed " << _name << "succesfully !" << std::endl;
}
