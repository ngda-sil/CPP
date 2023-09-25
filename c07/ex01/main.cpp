#include "iter.hpp"

int main()
{
	int i[5] = {1, 2, 3, 4, 5};
	float f[5] = {-.7, 2.5, -3.55, 42, 5555};
	char c[7] = {'a', 'b', 'c', '7', '?', '}', 'M'};
	std::string s1[3] = {"salut", "les", "copains"};
	
	
	myIter<int>(i, 5, printElement); 					std::cout << "\n";
	myIter<int>(i, 5, addOne);							std::cout << "\n";


	myIter<float>(f, 5, printElement);					std::cout << "\n";
	myIter<float>(f, 5, addOne);						std::cout << "\n";


	myIter<char>(c, 7, printElement);					std::cout << "\n";
	myIter<char>(c, 7, addOne);							std::cout << "\n";

	myIter<std::string>(s1, 3, printElement);			std::cout << "\n";

	

	return (0);
}
