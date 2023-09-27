#include "AForm.hpp"

// Canonical

AForm::AForm(std::string name, int toSign, int toExc) : _name(name), _signed(false), _gradeToSign(setGrade(toSign)), _gradeToExc(setGrade(toExc))
{
}

AForm::AForm(const AForm &rhs) : _name(rhs._name), _signed(rhs._signed), _gradeToSign(rhs._gradeToSign), _gradeToExc(rhs._gradeToExc) 
{
}

AForm& AForm::operator=(const AForm &rhs)
{
	//only _signed can be copied
	_signed = rhs.isSigned();

	return(*this);
}

AForm::~AForm(void)
{
}

// Get

std::string	AForm::getName(void) const
{
	return(_name);
}

int	AForm::getToSign(void) const
{
	return(_gradeToSign);
}

int AForm::getToExc(void) const
{
	return(_gradeToExc);
}

bool AForm::isSigned(void) const
{
	return(_signed);
}

// Set

int AForm::setGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150)
		throw AForm::GradeTooLowException();
	return (grade);
}

// Public Member Functions

void AForm::beSigned(Bureaucrat &b)
{	
	if (_signed == true)
		throw AForm::AFormAlreadySignedException();
	else if (b.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	else
		_signed = true;
}

void AForm::checkPrerequisites(int executorGrade) const
{
	if (!_signed)
		throw AForm::AFormNotSignedException();
	else if (executorGrade > _gradeToExc)
		throw Bureaucrat::GradeTooLowException();
}

// Exceptions

const char *AForm::GradeTooHighException::what() const throw()
{
	return("AForm::Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return("AForm::Grade too low");
}

const char *AForm::AFormAlreadySignedException::what() const throw()
{
	return("AForm::Form already signed");
}

const char *AForm::AFormNotSignedException::what() const throw()
{
	return("AForm::Form not signed");
}

// ostream

std::ostream& operator<<(std::ostream& o, AForm const &f)
{
	o << f.getName();
	if (!f.isSigned())
		o << " not";
	o << " signed, grade to sign : " << f.getToSign() << " grade to execute : " << f.getToExc();
	return(o);
}
