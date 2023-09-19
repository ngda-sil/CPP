#include "C.hpp"

// Canonical
C::C()
{
}

C::C(C const & rhs)
{
	(void) rhs;
}

C& C::operator=(C const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

C::~C()
{
}
