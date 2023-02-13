#include "sed4winner.hpp"

int	printError(std::string s1, int i)
{
	std::cout << s1 << std::endl;
	return (i);
}

void	remplaceWord(std::string* line, std::string* s1, std::string* s2)
{
	std::size_t	found;

	found = line->find(*s1);
	if (found != std::string::npos)  // npos = fin de la ligne atteinte
	{
		line->erase(found, s1->length());
		line->insert(found, *s2);
	}
}
