#include "searchAndReplace.hpp"

std::pair<std::ifstream*, std::ofstream*> checkArgs(int argc, char **argv)
{
	if (argc != 4)
		errorMsg(ARG, "");
	if (!argv[2][0])
		errorMsg(EMPTY, "");
	std::ifstream*	infile = new std::ifstream(argv[1]);
	if (!infile->is_open())
	{
		delete infile;
		errorMsg(INFILE, std::string(""));
	}

	std::ofstream*	outfile = new std::ofstream((((std::string)argv[1] + ".replace").c_str()));
	if (!outfile->is_open())
	{
		infile->close();
		delete infile;
		errorMsg(OUTFILE, argv[1]);
	}
	return std::make_pair(infile, outfile);
}

void	checkLastChar(const char* nameInfile, std::ofstream& outfile)
{
	std::ifstream	infile(nameInfile);
	std::streampos	size;
	char			lastChar;

	infile.seekg(0, std::ios::end);
	size = infile.tellg();
	if (size == 0)
		return ;
	else
	{
		infile.seekg(-1, std::ios::end);
		infile.get(lastChar);
		if (lastChar == '\n')
			outfile << "\n";
	}
	infile.close();
	outfile.close();
}
