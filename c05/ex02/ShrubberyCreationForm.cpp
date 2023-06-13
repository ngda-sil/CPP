#include "ShrubberyCreationForm.hpp"

//Canonical
ShrubberyCreation::ShrubberyCreation(const std::string target) : Form("Shrubbery Creation", 145, 137), _target(target)
{
}

ShrubberyCreation::~ShrubberyCreation(void)
{
}

// Fonctions membre

void	ShrubberyCreation::execute(Bureaucrat const & executor) const
{
	std::ofstream file(_target + "_shrubbery");

	file << TREE;
	file.close(); 

	std::cout << executor.getName() << " executed " << _name << "succesfully !" << std::endl;
}
