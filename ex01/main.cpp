#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	std::string	input;
	PhoneBook phonebook;
	std:: cout << "CHOOSE A COMMAND: ADD, SEARCH, EXIT." << std::endl;
	while (std::cin >> input, input != "EXIT")
	{
		if (input == "ADD")
		{
			phonebook.addContact();
		}
		if (input == "SEARCH")		
		{
			phonebook.printContacts();
			phonebook.printContact();
		}
		else
		{
			std::cout << "Error: invalid command " << input << std::endl;
		}
		std:: cout << std::endl <<  "CHOOSE A COMMAND: ADD, SEARCH, EXIT." << std::endl;
	}

	return 0;
}

