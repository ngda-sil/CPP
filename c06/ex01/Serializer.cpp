#include "Serializer.hpp"

// Canonical
Serializer::Serializer()
{
}

Serializer::Serializer(Serializer const & rhs)
{
	(void) rhs;
}

Serializer& Serializer::operator=(Serializer const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

Serializer::~Serializer()
{
}

// Methods

uintptr_t	Serializer::serialize(Data* ptr)
{
	std::cout << "Serialization\n";

	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	std::cout << "Derialization\n";

	Data* ptr = reinterpret_cast<Data*>(raw);
	return(ptr);
}
