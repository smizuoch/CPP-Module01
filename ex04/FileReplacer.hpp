#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <fstream>
#include <string>

class FileReplacer
{
  private:
	std::string filename;
	std::string s1;
	std::string s2;

  public:
	FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2);
	bool replaceContent();

  private:
	std::string replaceInLine(const std::string &line);
};

#endif // FILEREPLACER_HPP