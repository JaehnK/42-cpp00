#include <iostream>
#include <string>

int main(int argc, char **argv)	
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string CurrentArg = argv[i];
			for (size_t j = 0; j < CurrentArg.length(); j++)
				std::cout << (char) toupper(CurrentArg[j]);
		}
		std::cout << std::endl;
	}

	return (0);
}