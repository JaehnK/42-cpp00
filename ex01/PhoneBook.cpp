#include "ex01.hpp"

PhoneBook::PhoneBook()
{
	this->CurrentIdx = 0;
}
PhoneBook::~PhoneBook()
{
	return ;
};

void PhoneBook::ADD()
{
	Contact 	info;
	std::string	input;

	info.SetIdx(CurrentIdx % 8);
	
	std::cout << "Insert Your First Name: ";
	std::cin >> input;
	if (HandleEOF())
		return ;
	info.SetFirstName(input);

	std::cout << "Insert Your Last Name: ";
	std::cin >> input;
	if (HandleEOF())
		return ;
	info.SetLastName(input);

	std::cin.ignore(input.length(), '\n'); 

	std::cout << "Insert Your NickName: ";
	std::getline(std::cin, input);
	if (HandleEOF())
		return ;
	info.SetNickName(input);

	std::cout << "Insert Your Phone Number: ";
	input = InsertPhoneNumber();
	if (input.empty())
		return ;
	info.SetNumber(input);

	std::cout << "Insert Your Darkest Secret: ";
	std::getline(std::cin, input);
	if (HandleEOF())
		return ;
	info.SetSecret(input);

	array[CurrentIdx % 8] = info;
	CurrentIdx++;
}

void	PhoneBook::SEARCH()
{
	int ArrayLen;
	int InputIdx;

	PrintHeader();
	ArrayLen = std::min(CurrentIdx, 8);
	for (int i = 0; i < ArrayLen; i++)
	{
		std::cout << "║";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << array[i].GetIdx() << "║";
		PaddingAndPrint(array[i].GetFirstName());
		PaddingAndPrint(array[i].GetLastName());
		PaddingAndPrint(array[i].GetNickName());
		std::cout << std::endl;
	}
	PrintUnderline();

	InputIdx = GetIndexNumber(ArrayLen);
	if (InputIdx < 0)
		return ;
	std::cout << "First Name: " << array[InputIdx].GetFirstName() << std::endl;
	std::cout << "Last Name: " << array[InputIdx].GetLastName() << std::endl;
	std::cout << "NickName: " << array[InputIdx].GetNickName() << std::endl;
	std::cout << "Phone Number: " << array[InputIdx].GetPhoneNum() << std::endl;
	std::cout << "Darkest Secret: " << array[InputIdx].GetSecret() << std::endl;
}