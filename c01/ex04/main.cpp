#include "sed4winner.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		return (printError("usage : ./Sed4Winner <filename> s1 s2", 1));
	
	std::string		filename(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	
	std::ifstream	file1(filename);
	std::ofstream	file2(filename.append(".replace"));
	std::string		line;

	//std::cout << s1 << std::endl;
	//std::cout << s2 << std::endl;

	while (getline(file1, line))
	{
		if (line.empty())
			return (printError(filename.insert(0, "no such file : "), 1));
		else 
		{
			//std::cout << "1 : " << line << std::endl;
			remplaceWord(&line, &s1, &s2);
			//std::cout << "2 : " << line << std::endl;
			file2 << line << std::endl;
		}
	}
	return (0);
}
