#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <limits>
#include <sstream>

std::string format_str(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

bool	is_digit(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++) {
		if (str[i] < '0' || str[i] > '9') 
			return false;
	}
	return true;
}

void search(Contact contact[8], int index)
{
	int			index_search;
	std::string	input;

	std::cout << std::endl
			  << "|" << std::setw(10) << "INDEX"
			  << "|" << std::setw(10) << "NAME"
			  << "|" << std::setw(10) << "LAST NAME"
			  << "|" << std::setw(10) << "PSEUDO"
			  << "|" << std::endl;

	for (int i = 0; i < index; i++)
		contact[i].Show();
	std::cout << std::endl;
	std::getline(std::cin, input);
	if (is_digit(input) == true)
		std::istringstream(input) >> index_search;
	else
		index_search = -1;
	if (index_search <= 7 && index_search >= 0 && contact[index_search].exists == true)
		contact[index_search].ShowDetails();
	else
		std::cout << "Couldn't find contact" << std::endl;
}

int main(void)
{
	Contact contact[8];
	int index = 0;
	std::string cmd;

	while (1)
	{
		std::cout << "Please enter a command ([ADD] [SEARCH] [EXIT]) : ";
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			if (index == 8)
				std::cout << "Phone Book is full" << std::endl;
			else
			{
				contact[index].Create(index);
				index++;
			}
		}
		else if (cmd.compare("SEARCH") == 0)
		{	
			search(contact, index);
		}
		else if (cmd.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "[" << cmd << "] This command doesn't exist" << std::endl;
	}
	return (0);
}