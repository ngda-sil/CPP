#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a(22, "Jean");
	Bureaucrat b(150, "Janine");
	Bureaucrat c(1, "Marc");

	std::cout << std::endl;
	
	// change grade up and down normal cases
	std::cout << YELLOW << "moveUpTheLadder normal case" << RESET << std::endl;
	std::cout << a << std::endl;
	a.moveUpTheLadder();
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW << "moveDownTheLadder normal case" << RESET << std::endl;
	std::cout << a << std::endl;
	a.moveDownTheLadder();
	std::cout << a << std::endl;
	std::cout << std::endl;

	// grade < 1 : errors 
	std::cout << YELLOW <<  "Grade < 1 : moveUpTheLadder" << RESET << std::endl;
	std::cout << c << std::endl;
	c.moveUpTheLadder();
	std::cout << c << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW << "Grade < 1 : instantiation -12" << RESET << std::endl;
	Bureaucrat d(-12, "Chris");
	std::cout << d << std::endl;
	std::cout << std::endl;

	// grade > 150 : errors
	std::cout << YELLOW << "Grade > 150 : moveDownTheLadder" << RESET << std::endl;
	std::cout << b << std::endl;
	b.moveDownTheLadder();
	std::cout << b << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW << "Grade > 150 : instantiation 412" << RESET << std::endl;
	Bureaucrat f(412, "Charlotte");
	std::cout << f << std::endl;
	std::cout << std::endl;

	return(0);
}
