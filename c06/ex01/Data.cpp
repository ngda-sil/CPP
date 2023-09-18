#include "Data.hpp"

// Canonical
Data::Data() : name("undefined"), size(0)
{
}

Data::Data(std::string name, int size) : name(name), size(size)
{
}


Data::Data(Data const & rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		size = rhs.size;
	}
}

Data& Data::operator=(Data const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return(*this);
}

Data::~Data()
{
}
