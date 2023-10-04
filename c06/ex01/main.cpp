#include "Data.hpp"
#include "Serializer.hpp"
#include <string>

int	main()
{
	Data d;
	Serializer s;
	uintptr_t uPtr = 0;
	Data* ptr = 0;

	std::cout << "Enter the name of the data : ";
	std::cin >> d.name;
	std::cout << "Enter the size of the data : ";
	std::cin >> d.size;
	
	std::cout << "Data d		: Data address : " << &d << " | Name of the data : " << (std::string) d.name << " | Size of data : " << (int)d.size << std::endl;
	std::cout << "Data* ptr	: Data address : " << ptr << std::endl;
	
	uPtr = s.serialize(&d);
	ptr = s.deserialize(uPtr);

	if (&d == ptr)
	{
		std::cout << "Conversion successful. Pointers match." << std::endl;
		std::cout << "Data d 		: Data address : " << &d << " | Name of the data : " << (std::string) d.name << " | Size of data : " << (int)d.size << std::endl;
		std::cout << "Data *ptr 	: Data address : " << ptr << " | Name of the data : " << (std::string) ptr->name << " | Size of data : " << (int)ptr->size << std::endl;
	}
	
	return (0);
}
