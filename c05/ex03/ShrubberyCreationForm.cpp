#include "ShrubberyCreationForm.hpp"

//Canonical
ShrubberyCreation::ShrubberyCreation(const std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
}

ShrubberyCreation::ShrubberyCreation(const ShrubberyCreation &rhs) : AForm(rhs), _target(rhs._target)
{
}

ShrubberyCreation& ShrubberyCreation::operator=(const ShrubberyCreation &rhs)
{
	//only _signed can be copied
	_signed = rhs.isSigned();

	return(*this);
}


ShrubberyCreation::~ShrubberyCreation(void)
{
}

// Fonctions membre

void	ShrubberyCreation::execute(Bureaucrat const & executor) const
{	
	checkPrerequisites(executor.getGrade());

	std::ofstream file(_target + "_shrubbery");
	if (!file.is_open())
    	throw std::runtime_error("Failed to open file for writing.");
	file << TREE;
	file.close(); 
}

AForm* ShrubberyCreation::clone(std::string target)
{
	return (new ShrubberyCreation(target));
}
