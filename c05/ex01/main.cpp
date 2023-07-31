#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "-----------------------------------------" << std::endl;
		try
		{
			Bureaucrat	a(12, "Jean");
			Bureaucrat	b(150, "Janine");
			Form		c("Permis de swag", 12, 30);
		
			if (i == 1)
				Bureaucrat d(-12, "Chris");
			if (i == 2)
				b.moveDownTheLadder();
			if (i == 3)
				Form d("Secret Form", 0, 12);
			if (i == 4)
				Form d(" Top Secret Form", 151, 12);

			std::cout << c << std::endl;
		
			b.signForm(c);
			std::cout << c << std::endl;
			a.signForm(c);
			std::cout << c << std::endl;
			b.signForm(c);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout << "-----------------------------------------" << std::endl;
	}
	return(0);
}
