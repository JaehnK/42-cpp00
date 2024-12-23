#include "ex01.h"

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string NickName;
		std::string	PhoneNumber;
		std::string DarkestSecret;
	
	public:
		std::string	GetFirstName();
		std::string	GetLastName();



};

Contact:: GetFirstName()
