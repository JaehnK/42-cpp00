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
	std::cout << CurrentIdx << std::endl;
	std::cout << info.GetIdx() << std::endl;
	
	std::cout << "Insert Your First Name: ";
	std::cin >> input;
	info.SetFirstName(input);

	std::cout << "Insert Your Last Name: ";
	std::cin >> input;
	info.SetLastName(input);

	std::cin.ignore(input.length(), '\n'); 

	std::cout << "Insert Your NickName: ";
	std::getline(std::cin, input);
	info.SetNickName(input);

	std::cout << "Insert Your Phone Number: ";
	std::getline(std::cin, input);
	info.SetNumber(input);

	std::cout << "Insert Your Darkest Secret: ";
	std::getline(std::cin, input);
	info.SetSecret(input);

	array[CurrentIdx % 8] = info;
	CurrentIdx++;
}

void	PrintHeader()
{
	for (int i = 0; i < 45; i++)
	{
		if (i == 0)
			std::cout << "╔";
		else if (i == 44)
			std::cout << "╗";
		else if (i % 11 == 0)
			std::cout << "╦";
		else
			std::cout << "═";
	}
	std::cout << std::endl;
	std::cout << "║";
	std::cout << std::setfill(' ') << std::setw(10) << "Idx" <<  "║";
	std::cout << std::setfill(' ') << std::setw(10) << "FirstName" << "║";
	std::cout << std::setfill(' ') << std::setw(10) << "LastName" << "║";
	std::cout << std::setfill(' ') << std::setw(10) << "NickName" << "║" << std::endl;
	for (int i = 0; i < 45; i++)
	{
		if (i == 0)
			std::cout << "╠";
		else if (i == 44)
			std::cout << "╣";
		else if (i % 11 == 0)
			std::cout << "╬";
		else
			std::cout << "═";
	}
	std::cout << std::endl;
}

void	PaddingAndPrint(std::string output)
{
	if (output.size() <= 10)
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << output;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << output[i];
		std::cout << ".";
	}
	std::cout << "║";
}

int		GetIndexNumber()
{
	int input;

	input = -1;
	while (input >= 0 && input <= 7)
	{
		std::cout << "Insert Index Number > ";
		std::cin >> input;
		std::cout << std::endl;
	}
	return (input);
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
	for (int i = 0; i < 45; i++)
	{
		if (i == 0)
			std::cout << "╚";
		else if (i == 44)
			std::cout << "╝";
		else if (i % 11 == 0)
			std::cout << "╩";
		else
			std::cout << "═";
	}
	std::cout << std::endl;
	
	InputIdx = GetIndexNumber();
	std::cout << "First Name: " << array[InputIdx].GetFirstName() << std::endl;
	std::cout << "Last Name: " << array[InputIdx].GetLastName() << std::endl;
	std::cout << "NickName: " << array[InputIdx].GetNickName() << std::endl;
	std::cout << "Phone Number: " << array[InputIdx].GetPhoneNum() << std::endl;
	std::cout << "Darkest Secret: " << array[InputIdx].GetSecret() << std::endl;
}