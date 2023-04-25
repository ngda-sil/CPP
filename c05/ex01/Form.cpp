#include "Form.hpp"

// Canonical

Form::Form(std::string name, int toSign, int toExc)
{
	_name = name;
	_signed = false;
	setToSign(toSign);
	setToExc(toExc);
}

Form::Form(const Form &rhs)
{
	_name = rhs._name;
	_signed = rhs._signed;
	_gradeToSign = rhs._gradeToSign;
	_gradeToExc = rhs._gradeToExc;
}

Form& Form::operator=(const Form &rhs)
{
	_name = rhs._name;
	_signed = rhs._signed;
	_gradeToSign = rhs._gradeToSign;
	_gradeToExc = rhs._gradeToExc;
	
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

bool Form::isSign(void) const
{
	return(_signed);
}

// Set

void Form::setGrade(int grade, Function f)
{
	try 
	{
		if (grade < 1)
			throw Form::GradeTooHighException();
		else if (grade > 150)
			throw Form::GradeTooLowException();
		else 
		{
			if (f = ToSign)
				_gradeToSign = grade;
			if (f = ToExc)
				_gradeToExc = grade;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
}

// Public Member Functions

void beSigned(Bureaucrat b)
{
	try 
	{
		if (_signed == true)
			throw Form::Formn
		if (b.getGrade > _gradeToSign)
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

const char *Form::GradeTooHighException::what() const throw()
{
	return("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("Grade too low");
}

const char *Form::FormAlreadySignedException::what() const throw()
{
	return("Form already signed");
}

// ostream

std::ostream& operator<<(std::ostream& o, Form const &f)
{
	o << f.getName();
	return(o);
}
