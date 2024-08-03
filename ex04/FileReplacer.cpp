#include "FileReplacer.hpp"
#include <iostream>

FileReplacer::FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2)
    : filename(filename), s1(s1), s2(s2)
{
}

bool FileReplacer::replaceContent()
{
	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Unable to open input file." << std::endl;
		return false;
	}

	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename);
	if (!outputFile.is_open())
	{
		std::cerr << "Error: Unable to create output file." << std::endl;
		return false;
	}

	std::string line;

	if (s1.empty())
	{
		std::cerr << "Error: Empty string to search for." << std::endl;
		return false;
	}

	while (std::getline(inputFile, line))
	{
		outputFile << replaceInLine(line) << std::endl;
	}

	inputFile.close();
	outputFile.close();

	return true;
}

std::string FileReplacer::replaceInLine(const std::string &line)
{
	std::string result = line;
	size_t pos = 0;
	while ((pos = result.find(s1, pos)) != std::string::npos)
	{
		result = result.substr(0, pos) + s2 + result.substr(pos + s1.length());
		pos += s2.length();
	}
	return result;
}