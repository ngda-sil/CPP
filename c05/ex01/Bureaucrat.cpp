#include "Bureaucrat.hpp"


// Canonical

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
	std::cout << CYAN << _name << " Default constructor called with grade : " << grade << RESET << std::endl;
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _grade(rhs.getGrade()), _name(rhs.getName())
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &rhs)
{
	// Name is const and cannot be copied

	_grade = rhs.getGrade();
	
	return(*this);
}

Bureaucrat::~Bureaucrat(void) {}

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

// Sign

void Bureaucrat::signForm(Form &f) 
{
	try
	{
		f.beSigned(*this);
		std::cout << GREEN << *this << " signed " << f.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << *this << " couldn't sign " << f.getName() << " because "<< e.what() << RESET << std::endl;
	}
	
}

// Exceptions

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Bureaucrat::Grade too high");
}

const char 	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Bureaucrat::Grade too low");
}

// ostream

std::ostream& operator<<(std::ostream& o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade : "<< b.getGrade();
	return (o);
}
