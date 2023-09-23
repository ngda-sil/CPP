#include "iter.hpp"

int main()
{
	int[5] i = {1, 2, 3, 4, 5};
	float[5] f = {-.7, 2.5, -3.55, 42, 5555};
	char[7] c = {'a', 'b', 'c', '7', '?', '}', 'M'};
	std::string[3] s1 = {"salut", "les", "copains"};


	std::cout << "-----------------------------------------------\n";
	
	
	std::cout << "INT 	: " << i << std::endl;
	myIter(&i1, printf);
	/*std::cout << "INT 	: " << i1 << " | " << i2 << std::endl;

	std::cout << "FLOAT 	: " << f1 << " | " << f2 << std::endl;
	myIter(&f1, &f2);
	std::cout << "FLOAT 	: " << f1 << " | " << f2 << std::endl;

	std::cout << "CHAR	: " << c1 << " | " << c2 << std::endl;
	myIter(&c1, &c2);
	std::cout << "CHAR	: " << c1 << " | " << c2 << std::endl;

	std::cout << "STRING	: " << s1 << " | " << s2 << std::endl;
	myIter(&s1, &s2);
	std::cout << "STRING	: " << s1 << " | " << s2 << std::endl;*/

	
	std::cout << "-----------------------------------------------\n";

	return (0);
}
