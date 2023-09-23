#include "whatever.hpp"

int main()
{
	int i1 = 23;				int i2 = 42;
	float f1 = 43.2; 			float f2 = -0.23;
	char c1 = 'a'; 				char c2 = 'Z';
	std::string s1 = "salut";	std::string s2 = "balut";


	std::cout << "-----------------------------------------------\n";
	
	
	std::cout << "INT 	: " << i1 << " | " << i2 << std::endl;
	mySwap(&i1, &i2);
	std::cout << "INT 	: " << i1 << " | " << i2 << std::endl;

	std::cout << "FLOAT 	: " << f1 << " | " << f2 << std::endl;
	mySwap(&f1, &f2);
	std::cout << "FLOAT 	: " << f1 << " | " << f2 << std::endl;

	std::cout << "CHAR	: " << c1 << " | " << c2 << std::endl;
	mySwap(&c1, &c2);
	std::cout << "CHAR	: " << c1 << " | " << c2 << std::endl;

	std::cout << "STRING	: " << s1 << " | " << s2 << std::endl;
	mySwap(&s1, &s2);
	std::cout << "STRING	: " << s1 << " | " << s2 << std::endl;

	
	std::cout << "-----------------------------------------------\n";


	std::cout << "INT 	: " << i1 << " | " << i2 << std::endl;
	std::cout << "RETURN	: " << myMin(i1, i2) << std::endl;

	std::cout << "FLOAT 	: " << f1 << " | " << f2 << std::endl;
	std::cout << "RETURN	: " << myMin(f1, f2) << std::endl;

	std::cout << "CHAR	: " << c1 << " | " << c2 << std::endl;
	std::cout << "RETURN	: " << myMin(c1, c2) << std::endl;

	std::cout << "STRING	: " << s1 << " | " << s2 << std::endl;
	std::cout << "RETURN	: " << myMin(s1, s2) << std::endl;


	std::cout << "-----------------------------------------------\n";


	std::cout << "INT 	: " << i1 << " | " << i2 << std::endl;
	std::cout << "RETURN	: " << myMax(i1, i2) << std::endl;

	std::cout << "FLOAT 	: " << f1 << " | " << f2 << std::endl;
	std::cout << "RETURN	: " << myMax(f1, f2) << std::endl;

	std::cout << "CHAR	: " << c1 << " | " << c2 << std::endl;
	std::cout << "RETURN	: " << myMax(c1, c2) << std::endl;

	std::cout << "STRING	: " << s1 << " | " << s2 << std::endl;
	std::cout << "RETURN	: " << myMax(s1, s2) << std::endl;

	std::cout << "-----------------------------------------------\n";


	return (0);
}
