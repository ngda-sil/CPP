#include "Bureaucrat.hpp"

// Canonical

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
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
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;	
	}
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
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

// Sign

void Bureaucrat::signForm(Form &f)
{
	f.beSigned(*this);
}

// Exceptions

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("B : Grade too high");
}

const char 	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return("B : Grade too low");
}

// ostream

std::ostream& operator<<(std::ostream& o, Bureaucrat const &b)
{
	o << b.getGrade();
	return (o);
}
