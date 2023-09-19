#include "B.hpp"

// Canonical
B::B()
{
}

B::B(B const & rhs)
{
	(void) rhs;
}

B& B::operator=(B const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

B::~B()
{
}
