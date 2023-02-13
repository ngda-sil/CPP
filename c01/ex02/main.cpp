#include <iostream>

int main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "adress of string      : &string    : " << &string << std::endl;
	std::cout << "adress of stringPRT   : &stringPTR : " << &stringPTR << " adress in stringPRT  : " << stringPTR << std::endl;
	std::cout << "adress of stringREF   : &stringREF : " << &stringREF << std::endl;

	std::endl(std::cout);

	std::cout << "value string        : " << string << std::endl;
	std::cout << "value in *stringPRT : " << *stringPTR << std::endl; // stringPTR dereference
	std::cout << "value in stringREF  : " << stringREF << std::endl;
}
