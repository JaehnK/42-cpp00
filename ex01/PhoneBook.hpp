#ifndef PhoneBook_H
#define PhoneBook_H
#include "ex01.hpp"

class PhoneBook
{
private:
	Contact array[8];
	int	CurrentIdx;

public:
	PhoneBook();
	~PhoneBook();
	
	void ADD();
	void SEARCH();
};

#endif
