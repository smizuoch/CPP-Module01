#include "FileReplacer.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	FileReplacer replacer(filename, s1, s2);
	if (replacer.replaceContent())
	{
		std::cout << "File content replaced successfully." << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Failed to replace file content." << std::endl;
		return 1;
	}
}