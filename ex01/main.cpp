#include "ex01.hpp"

int	main()
{
	PhoneBook	Pb;
	std::string	input;

	while (input.compare("EXIT") != 0)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (input.compare("ADD") == 0)
			Pb.ADD();
		else if (input.compare("SEARCH") == 0)
			Pb.SEARCH();
		else if (input.compare("EXIT") == 0)
			break;
		else if (input.length() == 0)
			continue;
		else
			std::cout << "Invalid Input" << std::endl;
	}
	std::cout << "Quit and Contacts Are Lost Forever!" << std::endl;
}