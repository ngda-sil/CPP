#include <iostream>

int main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "adress string        : " << &string << std::endl;
	std::cout << "adress in stringPRT  : " << stringPTR << " adress of stringPRT  : " << &stringPTR << std::endl;
	std::cout << "adress in stringREF  : " << &stringREF << " adress of stringREF  : " << &stringREF << std::endl;

	std::endl(std::cout);

	std::cout << "value string        : " << string << std::endl;
	std::cout << "value in stringPRT  : " << *stringPTR << std::endl;
	std::cout << "value in stringREF  : " << stringREF << std::endl;
}
