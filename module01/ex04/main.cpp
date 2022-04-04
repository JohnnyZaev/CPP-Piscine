#include <iostream>
#include <fstream>
#include <sstream>

void RemoveWordFromLine(std::string &line, const std::string &word1, const std::string &word2)
{
	size_t n = line.find(word1);
	while (n != std::string::npos)
	{
		line.erase(n, word1.length());
		line.insert(n, word2);
		n = line.find(word1, n + word2.length());
	}
}

int replaceStringInFile(std::string s1, std::string s2, std::string infile)
{
    std::string outfile;
    std::ifstream fileFrom;
    std::ofstream fileTo;
	std::stringstream buffer;

    outfile = infile + ".replace";
    fileFrom.open(infile);
	if (!fileFrom.is_open())
		return (1);
	fileTo.open(outfile);
	if (!fileTo.is_open())
		return (1);
	fileTo.clear();
	buffer << fileFrom.rdbuf();
	outfile = buffer.str();
	RemoveWordFromLine(outfile, s1, s2);
	fileTo << outfile;
    return (0);
}

int main(int argc, char **argv)
{
    std::string infile;
    std::string s1;
    std::string s2;

    if (argc != 4)
    {
        std::cerr << "Arguments error" << std::endl;
        return (1);
    }
    infile = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (replaceStringInFile(s1, s2, infile))
    {
        std::cerr << "Files error" << std::endl;
		return (1);
    }
    std::cout << "Replacement was successful" << std::endl;
    return (0);
}