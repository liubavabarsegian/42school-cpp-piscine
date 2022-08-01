#include "PhoneBook.hpp"

int			PhoneBook::getNumber() 
{
	return _number;
}

void		PhoneBook::printContacts()
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	int i = 0;

	while (i < _number)
	{
		std::cout << std::string(9, ' ');
		std::cout << _contacts[i].getIndex() << '|';
		if (_contacts[i].getFirstName().length() <= 10)
		{
			std::cout << std::string(10 - _contacts[i].getFirstName().length(), ' ');
			std::cout << _contacts[i].getFirstName() << '|';
		}
		else
		{
			int j = 0;
			while (j < 9 && _contacts[i].getFirstName()[j])
			{
				std::cout << _contacts[i].getFirstName()[j];
				j++;
			}
			std::cout << ".|";
		}
		if (_contacts[i].getLastName().length() <= 10)
		{
			std::cout << std::string(10 - _contacts[i].getLastName().length(), ' ');
			std::cout << _contacts[i].getLastName() << '|';
		}
		else
		{
			int j = 0;
			while (j < 9 && _contacts[i].getLastName()[j])
			{
				std::cout << _contacts[i].getLastName()[j];
				j++;
			}
			std::cout << ".|";
		}
		if (_contacts[i].getNickname().length() <= 10)
		{
			std::cout << std::string(10 - _contacts[i].getNickname().length(), ' ');
			std::cout << _contacts[i].getNickname();
			std::cout << std::endl;
		}
		else
		{
			int j = 0;
			while (j < 9 && _contacts[i].getNickname()[j])
			{
				std::cout << _contacts[i].getNickname()[j];
				j++;
			}
			std::cout << "." << std::endl;
		}
		i++;
	}
	std::cout << std::endl;
}

void		PhoneBook::printContact()
{
	int index;

	std::cin >> index;
	if (index >= 1 && index <= 8)
	{
		std::cout << "Contact info: " << std::endl;
		std::cout << "FIRST NAME: " << _contacts[index - 1].getFirstName() << std::endl;
		std::cout << "LAST NAME: " << _contacts[index - 1].getLastName() << std::endl;
		std::cout << "NICKNAME: " << _contacts[index - 1].getNickname() << std::endl;
		std::cout << "PHONE NNUMBER: " << _contacts[index - 1].getPhoneNumber() << std::endl;
		std::cout << "DARKEST SECRET: " << _contacts[index - 1].getDarkestSecret() << std::endl;
	}
}
void		PhoneBook::addContact()
{
	_number += 1;
	_contacts[_number - 1].setIndex(_number);
	std::cout << "FIRST NAME: ";
	std::string firstName;
	std::cin >> firstName;
	_contacts[_number - 1].setFirstName(firstName);

	std::cout << "LAST NAME: ";
	std::string lastName;
	std::cin >> lastName;
	_contacts[_number - 1].setLastName(lastName);

	std::cout << "NICKNAME: ";
	std::string nickname;
	std::cin >> nickname;
	_contacts[_number - 1].setNickname(nickname);

	std::cout << "PHONENUMBER: ";
	std::string phoneNumber;
	std::cin >> phoneNumber;
	_contacts[_number - 1].setPhoneNumber(phoneNumber);

	std::cout << "DARKEST SECRET: ";
	std::string darkestSecret;
	std::cin.ignore('\n');
	std::getline(std::cin, darkestSecret);
	_contacts[_number - 1].setDarkestSecret(darkestSecret);
	std::cout << "Contact added." << std::endl;
}