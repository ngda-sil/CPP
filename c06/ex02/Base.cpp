#include "Base.hpp"


// Canonical
Base::Base() {}

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

Base::~Base() {}

// Methods

Base* generate()
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
	// if not null downcast successful 

	if (dynamic_cast<A*> (p) != NULL)
		std::cout << "Identify * : My type is A\n";
	else if (dynamic_cast<B*> (p) != NULL)
		std::cout << "Identify * : My type is B\n";
	else if (dynamic_cast<C*> (p) != NULL)
		std::cout << "Identify * : My type is C\n";
}

void identify(Base &p)
{
	// if downcast unsuccessfull throws an exeption -> std::badcast
	
	try
	{
		(void)dynamic_cast<A&> (p);
		std::cout << "Identify & : My type is A\n";
	}
	catch(const std::bad_cast& e){}

	try
	{
		(void)dynamic_cast<B&> (p);
		std::cout << "Identify & : My type is B\n";
	}
	catch(const std::bad_cast& e){}
	
	try
	{
		(void)dynamic_cast<C&> (p);
		std::cout << "Identify & : My type is C\n";
	}
	catch(const std::bad_cast& e){}
}

