#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact
{
	public:

		Contact(void);
		~Contact(void);

		void		initNewContact(void);
		void		setInfo(void);
		std::string	getInfo(int i);

	private:

		std::string info[5];
};

#endif
