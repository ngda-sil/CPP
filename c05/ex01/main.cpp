#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	a(22, "Jean");
	Bureaucrat	b(150, "Janine");
	Bureaucrat  g(12, "Louis");
	Bureaucrat	c(1, "Marc");
	Form		e("Permis de swag", 12, 30);

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
	
	b.signForm(e);
	c.signForm(e);
	std::cout << e.isSigned() << std::endl;
	g.signForm(e);
	return(0);
}
