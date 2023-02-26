#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	/*Fixed 		 c;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	c = a + b;
	std::cout << c << std::endl;
	a = a - b;
	std::cout << a << std::endl;
	c = 0;
	a = 0;
	a = a / c;
	std::cout << a << std::endl;
	a = 2; 
	c = a * b; 
	std::cout << c << std::endl;
	if (c > b)
		std::cout << "It's bigger" << std::endl;
	if (b <	c)
		std::cout << "It's not bigger" << std::endl;
	if (c >= a)
		std::cout << c << " : c >= a : " << a << std::endl;
	if (c >= c)
		std::cout << "c >= c" << std::endl;
	if (a <= c)
		std::cout << a << " : a <= c : " << c << std::endl;
	if (c <= c)
		std::cout << "c <= c" << std::endl;
	if (c == c)
		std::cout << "c == c" << std::endl;
	if (c != b)
		std::cout << "c != b" << std::endl;

	std::cout << ++c << std::endl;
	std::cout << --c << std::endl;

	std::cout << c << std::endl;
	c++;
	std::cout << c++ << std::endl;
	std::cout << c << std::endl;

 	c = -1939;
	std::cout << Fixed::min( a, c) << std::endl;
	std::cout << Fixed::max( a, c) << std::endl;

	std::cout << Fixed::min( b, c) << std::endl;
	std::cout << Fixed::max( b, c) << std::endl;*/

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	float g = 0.0f;

	std::cout << g << std::endl;
	std::cout << ++g << std::endl;

	return (0);
}
