#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// Canonical
Base::Base()
{
}

Base::Base(Base const & rhs)
{
	(void) rhs;
}

Base& Base::operator=(Base const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

Base::~Base()
{
}

// Methods

Base* Base::generate()
{
	int random = std::rand() % 3;

	switch (random)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*> (p))
		std::cout << "Identify * : My type is A\n";
	else if (dynamic_cast<B*> (p))
		std::cout << "Identify * : My type is B\n";
	else if (dynamic_cast<C*> (p))
		std::cout << "Identify * : My type is C\n";
}

void identify(Base &p)
{
	identify(p);
}
