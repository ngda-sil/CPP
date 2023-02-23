#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;


	std::cout << "b = " << b.getRawBits() << std::endl;
	b.setRawBits(5);
	c = b;

	std::cout << "a = " << a.getRawBits() << std::endl;
	std::cout << "b = " << b.getRawBits() << std::endl;
	std::cout << "c = " << c.getRawBits() << std::endl;
	
	return 0;
}
