#include <iostream>
#include <cstring>
#include <fstream>

int replaceStringInFile(std::string s1, std::string s2, std::string infile)
{
    std::string outfile;
    std::ifstream fileFrom;
    std::ofstream fileTo;

    outfile = infile + ".replace";
    if (fileFrom.open(infile))
        return (1);

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
    }
    std::cout << "Replacement was successful" << std::endl;
    return (0);
}