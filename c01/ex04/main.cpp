#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av)
{
	std::string		filename = av[1];
	std::ifstream	FileOne(filename);
	std::ofstream	FileTwo(filename.append(".replace"));
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::string		Line;
	std::size_t		found;

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;

	if (ac != 4)
	{
		std::cout << "usage : ./Sed4Winner <filename> s1 s2 \n";
		return (1);
	}

	while (getline(FileOne, Line))
	{
		if (Line.empty())
		{
			std::cout << "no such file " << av[1] << std::endl;
			return (1);
		}
		else 
		{
			std::cout << "1 : " << Line << std::endl;
			found = Line.find(s1);
			if (found != std::string::npos)
			{
				Line.erase(found, s1.length());
				Line.insert(found, s2);	
			}
			std::cout << "2 : " << Line << std::endl;
			FileTwo << Line << std::endl;
		}
	}
	FileOne.close();
	return (0);
}
