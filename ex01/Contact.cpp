#include "ex01.hpp"

Contact::Contact()
{

};

Contact::~Contact()
{

};

void	Contact::SetFirstName(std::string input)
{
	FirstName = input;
};

void	Contact::SetLastName(std::string input)
{
	LastName = input;
};

void	Contact::SetNickName(std::string input)
{
	NickName = input;
}

void	Contact::SetNumber(std::string input)
{
	PhoneNumber = input;
};

void	Contact::SetSecret(std::string input)
{
	DarkestSecret = input;
};

void	Contact::SetIdx(int idx)
{
	Idx = idx;
};

const std::string& Contact::GetFirstName() const
{
	return (FirstName);
}

const std::string& Contact::GetLastName() const
{
	return (LastName);
};

const std::string& Contact::GetNickName() const
{
	return (NickName);
}

const std::string& Contact::GetPhoneNum() const
{
	return (PhoneNumber);
}

const std::string& Contact::GetSecret() const
{
	return (DarkestSecret);
}

const int& Contact::GetIdx() const
{
	return (Idx);
}