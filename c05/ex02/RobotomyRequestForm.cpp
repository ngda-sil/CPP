#include "RobotomyRequestForm.hpp"

//Canonical
RobotomyRequest::RobotomyRequest(const std::string target) : Form("Robotomy Request", 72, 45), _target(target)
{
}

RobotomyRequest::~RobotomyRequest(void)
{
}

// Fonctions membre

void	RobotomyRequest::execute(Bureaucrat const & executor) const
{
	static int i = 0;

	if (i++ % 2 == 0)
		std::cout << "Sorry " << executor.getName() << " we had some problem with our drill" << std::endl;
	else 
	{
		std::cout << "Vrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr" << std::endl; 
		std::cout << _target << " a été lobotomisé.e" << std::endl;
		std::cout << executor.getName() << " executed " << _name << " succesfully !" << std::endl;
	}
	if (i == 2)
		i = 0;
}
