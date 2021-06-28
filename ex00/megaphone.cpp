#include <iostream>
#include <string>
#include <locale>

int main(int argc, char **argv)
{
	std::locale loc;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		for (std::string::size_type i = 0; i < str.length(); i++)
			std::cout << std::toupper(str[i],loc);
		if (i != argc - 1)
			std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}
