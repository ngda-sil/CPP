#include "Bureaucrat.hpp"

// Canonical

Bureaucrat::Bureaucrat(int grade, const std::string name) : _name(name)
{
	std::cout << CYAN << _name << " Default constructor called with grade : " << grade << RESET << std::endl;
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	_grade = rhs.getGrade();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &rhs)
{
	_grade = rhs.getGrade();
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
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
			_grade = grade;
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

// moveUp and Down

void	Bureaucrat::moveUpTheLadder(void)
{
	std::cout << CYAN << _name << " moveUpTheLadder called" << RESET << std::endl;
	setGrade(getGrade() - 1);
}

void	Bureaucrat::moveDownTheLadder(void)
{
	std::cout << CYAN << _name << " moveDownTheLadder called" << RESET << std::endl;
	setGrade(getGrade() + 1);
}


// Exceptions

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
		return("Bureaucrat::Grade too high\n");
}

const char 	*Bureaucrat::GradeTooLowException::what() const throw()
{
		return("Bureaucrat::Grade too low\n");
}

// ostream

std::ostream& operator<<(std::ostream& o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade : "<< b.getGrade() << ".";
	return (o);
}
