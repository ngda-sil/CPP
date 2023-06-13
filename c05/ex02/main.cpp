#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat	a(22, "Jean");
	Bureaucrat	b(150, "Janine");
	Bureaucrat  g(12, "Louis");
	Bureaucrat	c(1, "Marc");
	PresidentialPardon	e("Ton père");
	RobotomyRequest l("Le voisin");
	ShrubberyCreation z("Garden");

	std::cout << "B: "<< a.getName() << " grade : "<< a.getGrade() << std::endl;
	a.moveUpTheLadder();
	std::cout << "B: "<< a.getName() << " grade : "<< a.getGrade() << std::endl;
	
	std::cout << "B: "<< b.getName() << " grade : "<< b.getGrade() << std::endl;
	b.moveDownTheLadder();
	std::cout << "B: "<< b.getName() << " grade : "<< b.getGrade() << std::endl;
	
	std::cout << "B: "<< c.getName() << " grade : "<< c.getGrade() << std::endl;
	c.moveUpTheLadder();
	std::cout << "B: "<< c.getName() << " grade : "<< c.getGrade() << std::endl;
	
	std::cout << "Erreur a l'instanctiation -12" << std::endl;
	Bureaucrat d(0, "Chris");
	
	std::cout << "Erreur a l'instanctiation 412" << std::endl;
	Bureaucrat f(412, "Charlotte");

	d.moveDownTheLadder();
	std::cout << "B: "<< d.getName() << " grade : "<< d.getGrade() << std::endl;
	
	b.executeForm(e);
	b.signForm(e);
	c.signForm(e);
	std::cout << e.isSigned() << std::endl;
	g.signForm(e);
	c.executeForm(e);
	a.signForm(l);
	b.executeForm(l);
	c.executeForm(l);
	d.executeForm(l);
	d.executeForm(l);
	c.executeForm(l);
	b.executeForm(l);
	d.executeForm(l);
	d.executeForm(l);

	a.signForm(z);
	a.executeForm(z);
	return(0);
}
