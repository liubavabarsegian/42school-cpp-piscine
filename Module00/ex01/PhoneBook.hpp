#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact _contacts[8];
		int		_number;
	public:
		PhoneBook() {_number = 0;};
		int			getNumber();
		void		printContacts();
		void		printContact();
		void		addContact();
};

#endif