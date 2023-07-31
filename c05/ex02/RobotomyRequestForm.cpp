#include "RobotomyRequestForm.hpp"

//Canonical
RobotomyRequest::RobotomyRequest(const std::string target) : Form("Robotomy Request", 72, 45), _target(target)
{
}

RobotomyRequest::RobotomyRequest(const RobotomyRequest &rhs) : Form(rhs), _target(rhs._target)
{
}

RobotomyRequest& RobotomyRequest::operator=(const RobotomyRequest &rhs)
{
	//only _signed can be copied
	_signed = rhs.isSigned();

	return(*this);
}

RobotomyRequest::~RobotomyRequest(void)
{
}

// Fonctions membre

void	RobotomyRequest::execute(Bureaucrat const & executor) const
{
	checkPrerequisites(executor.getGrade());

	int random = std::rand() % 2;

	if (!random)
		std::cout << "Sorry " << executor.getName() << " we had some problem with our drill" << std::endl;
	else 
	{
		std::cout << "Vrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr" << std::endl; 
		std::cout << _target << " a été lobotomisé.e" << std::endl;
	}
}
