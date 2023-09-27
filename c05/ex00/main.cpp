#include "Bureaucrat.hpp"

int main(int ac, char** av)
{
	if (ac == 1)
	{
		std::cout << "Faut mettre des arguments pelo !\n";
		return (1);
	}
	std::string test = av[1];
	
	if (test == "BASIC")
	{
		try
		{
			Bureaucrat a(22, "Jean");

			// change grade up and down normal cases
			std::cout << std::endl;
			std::cout << YELLOW << "moveUpTheLadder normal case" << RESET << std::endl;
			std::cout << std::endl;
			std::cout << a << std::endl;
			a.moveUpTheLadder();
			std::cout << a << std::endl;
			std::cout << std::endl;

			// change grade up and down normal cases
			std::cout << YELLOW << "moveDownTheLadder normal case" << RESET << std::endl;
			std::cout << std::endl;
			std::cout << a << std::endl;
			a.moveDownTheLadder();
			std::cout << a << std::endl;
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}

	if (test == "Grade < 1 : moveUpTheLadder")
	{
		Bureaucrat a(1, "Marc");
		try
		{
			std::cout << a << std::endl;
			a.moveUpTheLadder();
			std::cout << a << std::endl;
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}

	if (test == "Grade < 1 :instantiation -12")
	{
		try
		{
			Bureaucrat d(-12, "Chris");
			std::cout << d << std::endl;
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}

	if (test == "Grade > 150 : moveDownTheLadder")
	{
		try
		{
			Bureaucrat b(150, "Janine");

			std::cout << std::endl;
			std::cout << b << std::endl;
			b.moveDownTheLadder();
			std::cout << b << std::endl;
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}

	if (test == "Grade > 150 : instantiation 412")
	{
		try
		{
			Bureaucrat f(412, "Charlotte");
			std::cout << f << std::endl;
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	return(0);
}
