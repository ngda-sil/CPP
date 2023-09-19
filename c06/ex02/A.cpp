#include "A.hpp"

// Canonical
A::A()
{
}

A::A(A const & rhs)
{
	(void) rhs;
}

A& A::operator=(A const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

A::~A()
{
}
