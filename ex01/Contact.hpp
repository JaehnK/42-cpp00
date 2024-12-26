#ifndef CONTACT_H
#define CONTACT_H
#include "ex01.hpp"

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string NickName;
		std::string	PhoneNumber;
		std::string DarkestSecret;
		int			Idx;
	
	public:
		Contact();
		~Contact();
		void		SetFirstName(std::string input);
		void		SetLastName(std::string input);
		void		SetNickName(std::string input);
		void		SetNumber(std::string input);
		void		SetSecret(std::string input);
		void		SetIdx(int idx);
		const std::string&	GetFirstName() const;
		const std::string&	GetLastName() const;
		const std::string&	GetNickName() const;
		const std::string&	GetPhoneNum() const;
		const std::string&	GetSecret() const;
		const int&			GetIdx() const;
};

#endif
