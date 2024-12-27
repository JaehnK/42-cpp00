#ifndef EX01_H
#define EX01_H
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int				HandleEOF();
std::string		InsertPhoneNumber();
void			PrintHeader();
void			PrintUnderline();
void			PaddingAndPrint(std::string output);
int				GetIndexNumber(int ArrayLen);

#endif 