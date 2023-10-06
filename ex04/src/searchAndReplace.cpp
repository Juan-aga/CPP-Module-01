#include "searchAndReplace.hpp"

void	readInfile(std::ifstream& infile, std::string& readed, size_t size)
{
	std::string	tmp;

	size *= 2;
	while (readed.length() < size)
	{
		std::getline(infile, tmp);
		readed += tmp;
		if (DEBUG)
			std::cerr << "reading.." << std::endl;
		if (infile.peek() != EOF)
			readed += "\n";
		else
			break ;
	}
}

void	replaceStr(std::string& readed, std::string search, std::string replace)
{
	size_t	pos;

	pos = 0;
	while (pos != (size_t) -1)
	{
		pos = readed.find(search, pos);
		if (pos != (size_t) -1)
		{
			if (DEBUG)
				std::cerr << "find " << search << " in\t" << readed;
			readed.erase(pos, search.length());
			readed.insert(pos, replace);
			if (DEBUG)
				std::cerr << "changed for:\t" << readed;
			pos += (replace.length() - search.length()) + 1;
		}
	}
}

void	writeOutfile(std::ofstream& outfile, std::string& readed, size_t size)
{
	if (DEBUG)
		std::cout << "Writing.." << std::endl;
	outfile << readed.substr(0, readed.length() - size + 1);
	readed = readed.erase(0, readed.length() - size + 1);
}
