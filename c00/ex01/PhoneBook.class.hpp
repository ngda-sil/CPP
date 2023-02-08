#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class	PhoneBook
{
	public:
		
		PhoneBook(void);
		~PhoneBook(void);

		void addContact(void);
		void searchContact(void);
		void displayContact(void);

	private:

		int		nb;
		Contact	newContact;
		Contact	tab[8];
};

#endif
