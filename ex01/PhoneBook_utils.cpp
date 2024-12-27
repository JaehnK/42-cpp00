#include "ex01.hpp"

int	HandleEOF()
{
	if (std::cin.eof())
	{
		std::cout << "EOF" << std::endl;
		std::cin.clear();
		std::cin.sync();
		return (1);
	}
	return (0);
}

int		CheckPhoneNumber(std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (isspace(input[i]) || isdigit(input[i]))
			return (1);			
	}
	return (0);
}

std::string		InsertPhoneNumber()
{
	std::string	input;

	while (true)
	{
		std::getline(std::cin, input);
		if (HandleEOF() == 1)
			return (std::string());
		if (CheckPhoneNumber(input) == 1)
			break;
		std::cout << "Insert Your Phone Number: ";
	}
	return (input);
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

void	PrintUnderline()
{
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

int		GetIndexNumber(int ArrayLen)
{
	int input;

	input = -1;
	if (ArrayLen == 0)
		return (-1);
		
	while (input < 0 || input > ArrayLen - 1)
	{
		std::cout << "Insert Index Number > ";
		if (!(std::cin >> input))
		{
			if (HandleEOF())
				return(-1);	
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Wrong Index" << std::endl;
		}
		else
			std::cin.ignore();
		if (input < 0 || input > ArrayLen - 1)
			std::cout << "Wrong Index" << std::endl;
	}
	return (input);
}