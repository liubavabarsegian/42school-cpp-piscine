#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact
{
	private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		void			setIndex(int index);
		void			setFirstName(std::string firstName);
		void			setLastName(std::string lastName);
		void			setNickname(std::string nickName);
		void			setPhoneNumber(std::string phoneNumber);
		void			setDarkestSecret(std::string darkestSecret);
		int				getIndex();
		std::string		getFirstName();
		std::string		getLastName();
		std::string		getNickname();
		std::string		getPhoneNumber();
		std::string		getDarkestSecret();
};
#endif