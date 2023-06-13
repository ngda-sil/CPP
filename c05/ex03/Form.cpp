#include "Form.hpp"

// Canonical

Form::Form(std::string name, int toSign, int toExc) : _name(name), _signed(false), _gradeToSign(setGrade(toSign)), _gradeToExc(setGrade(toExc))
{
}

Form::Form(const Form &rhs) : _name(rhs._name), _signed(rhs._signed), _gradeToSign(rhs._gradeToSign), _gradeToExc(rhs._gradeToExc) 
{
}

Form& Form::operator=(const Form &rhs)
{
	//only _signed can be copied
	_signed = rhs.isSigned();

	return(*this);
}

Form::~Form(void)
{
}

// Get

std::string	Form::getName(void) const
{
	return(_name);
}

int	Form::getToSign(void) const
{
	return(_gradeToSign);
}

int Form::getToExc(void) const
{
	return(_gradeToExc);
}

bool Form::isSigned(void) const
{
	return(_signed);
}

// Set

int Form::setGrade(int grade)
{
	try 
	{
		if (grade < 1)
			throw Form::GradeTooHighException();
		else if (grade > 150)
			throw Form::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	return (grade);
}

// Public Member Functions

void Form::beSigned(Bureaucrat &b)
{
	try 
	{
		if (_signed == true)
			throw Form::FormAlreadySignedException();
		else if (b.getGrade() > _gradeToSign)
			throw Form::GradeTooLowException();
		else
		{
			_signed = true;
			std::cout << "Bureaucrat "<< b.getName() << " signed form " << getName() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "beSigned : " << b.getName() << " coulnd't sign " << getName() << " because "<< e.what() << std::endl;
	}
}

// Exceptions

const char *Form::GradeTooHighException::what() const throw()
{
	return("F : Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("F : Grade too low");
}

const char *Form::FormAlreadySignedException::what() const throw()
{
	return("F : Form already signed");
}

const char *Form::NotSignedException::what() const throw()
{
	return("F : Form not signed");
}

// ostream

std::ostream& operator<<(std::ostream& o, Form const &f)
{
	o << f.getName();
	return(o);
}
