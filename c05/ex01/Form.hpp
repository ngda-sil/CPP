#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

enum State {SIGN = 0, EXC = 1};

class Bureaucrat;

class	Form
{
	public:
		Form(std::string name, int toSign, int toExc);
		Form(const Form &rhs);
		Form& operator=(const Form &rhs);
		~Form(void);

	 	std::string	getName(void) const;
		int			getToSign(void) const;
		int			getToExc(void) const;
		bool 				isSigned(void) const;

		int		setGrade(int grade);
		void		beSigned(Bureaucrat &b);

		class		GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class		GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class		FormAlreadySignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	
		private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExc;
};

std::ostream& operator <<(std::ostream& o, Form const &f);
#endif
