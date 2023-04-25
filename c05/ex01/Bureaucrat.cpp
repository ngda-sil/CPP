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

// Sign

void signForm(Form f)
{
	try
	{
		if (f._signed == true)
			throw Form::FormAlreadySignedException();
		if (getGrade > f._gradeToSign)
			throw Form::GradeTooLowException();
		else
		{
			_signed = true;
			std::cout << b.getName() << " signed " << this.getName() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << b.getName() << " coulnd't sign " << this.getName() << " because "<< e.what() << std::endl;
	}
}

// Exceptions

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
		return("Grade too high");
}

const char 	*Bureaucrat::GradeTooLowException::what() const throw()
{
		return("Grade too low");
}

// ostream

std::ostream& operator<<(std::ostream& o, Bureaucrat const &b)
{
	o << b.getGrade();
	return (o);
}
