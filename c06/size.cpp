#include <iostream>
#include <limits>
int main()
{
	std::string intmax = "2147483647";
	std::string intmin = "-2147483648";

	std::cout << std::numeric_limits<float>::max() << " : length : " << intmax.length() << std::endl;
	std::cout << std::numeric_limits<float>::min() << " : length : " << intmin.length() << std::endl;
	
	return (0);
}
