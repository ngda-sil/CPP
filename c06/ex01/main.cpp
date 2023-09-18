#include "Data.hpp"
#include "Serializer.hpp"

int	main()
{
	Data d("jean", 34);
	Serializer s;
	uintptr_t uPtr;
	Data* ptr;

	std::cout << "Enter the name of the data :";
	std::cin >> d.name;
	std::cout << "\n Enter the size of the data :";
	std::cin >> d.size;
	
	std::cout << "Name of the data : " << d.name << "Size of data : " << d.size << std::end;
	ptr = &d;

	uPtr = s.serialize(ptr);

	std::cout << "uPtr : " << uPtr << " addr. data : " << d << std::endl;

	ptr = s.deserialize(uPtr);

//	std::cout << "\n Name of the data : " << d->name << "Size of data : " << d->size << std::end;

	return (0);
}
