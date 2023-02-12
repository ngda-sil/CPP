#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public:
		
		PhoneBook(void);
		~PhoneBook(void);

		void addContact(void);
		void searchContact(void);
		void displayContact(void);

	private:

		int		_nb;
		Contact	_newContact;
		Contact	_tab[8];
};

void welcome(void);

#endif
