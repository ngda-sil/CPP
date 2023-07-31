#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{	
	for (int i = 0; i < 3; i++)
	{
		std::cout << "-----------------------------------------" << std::endl;
		try
		{
			Bureaucrat	a(12, "Jean");
			Bureaucrat	b(150, "Janine");
			Bureaucrat 	c(1, "Jérôme");
			PresidentialPardon	d("Ton père");
			RobotomyRequest e("Le voisin");
			ShrubberyCreation f("Garden");
			ShrubberyCreation g("Forest");
		
			//Form h("Not your regular form", 4, 23); //abstract class won't compile
			
			if (i == 1)
				Bureaucrat g(-12, "Chris");
			if (i == 2)
				b.moveDownTheLadder();

			for (int i = 0; i < 3; i++)
			{
				std::cout << "\n";

				if (i == 0)
				{
					std::cout << YELLOW << d << RESET << std::endl;
					b.signForm(d);
					a.executeForm(d);
					a.signForm(d);
					c.executeForm(d);
					std::cout << YELLOW << d << RESET << std::endl;
				}
				if (i == 1)
				{
					std::cout << YELLOW << e << RESET << std::endl;
					b.signForm(e);
					a.signForm(e);
					a.executeForm(e);
					c.executeForm(e);
					a.executeForm(e);
					c.executeForm(e);
				}
				if (i == 2)
				{
					std::cout << YELLOW << f << RESET << std::endl;
					c.signForm(f);
					c.signForm(f);
					c.executeForm(f);
					c.signForm(g);
					c.executeForm(g);
				}
				std::cout << "\n";
			}
			
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout << "-----------------------------------------" << std::endl;
	}
	return(0);
}
