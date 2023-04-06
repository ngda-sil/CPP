#include "Bureaucrat.hpp"

// Canonical

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	setGrade(grade);
	setName(name);
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	_grade = rhs.getGrade();
	_name = rhs.getName();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &rhs)
{
	_grade = rhs.getGrade();
	_name = rhs.getName();
	return(*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

// Set & Get

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::setGrade(int grade)
{
	_grade = grade;
	// try throw catch
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

void Bureaucrat::setName(std::string name)
{
	_name = name;
}

// moveUp and Down

void	Bureaucrat::moveUpTheLadder(void)
{
	setGrade(getGrade() - 1);
}

void	Bureaucrat::moveDownTheLadder(void)
{
	setGrade(getGrade() + 1);
}

// ostream


std::ostream& operator<<(std::ostream& o, Bureaucrat const &b)
{
	o << b.getGrade;
	return (o);
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const &b)
{
	o << b.getName;
	return (o);
}
