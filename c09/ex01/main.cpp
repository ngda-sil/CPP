#include "RPN.hpp"

int main(int ac, char **av)
{
	(void) av;
	if (ac != 2)
	{
		std::cerr << "Error : Usage exemple : ./RPN \" n n * n + n - n +\"" << std::endl;
		return (1);
	}

	RPN::calculation(av[1]);
	
	return (0);
}
