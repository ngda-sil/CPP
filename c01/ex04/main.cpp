#include "sed4winner.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		return (printError("usage : ./Sed4Winner <filename> s1 s2", 1));
	
	std::string		filename(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	
	std::ifstream	infile(filename);
	std::string		line;

	//std::cout << s1 << std::endl;
	//std::cout << s2 << std::endl;
	
	if (!infile.is_open())
		return (printError("Error opening file", 1));

	std::ofstream	outfile(filename + ".replace");

	while (getline(infile, line))
	{
		//std::cout << "1 : " << line << std::endl;
		remplaceWord(&line, &s1, &s2);
		//std::cout << "2 : " << line << std::endl;
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	
	return (0);
}
