#ifndef	SEARCHANDREPLACE_H
# define SEARCHANDREPLACE_H

# include <iostream>
# include <string>
# include <fstream>

enum	ERROR
{
	ARG,
	INFILE,
	OUTFILE,
	ERROR_SIZE
};

/*		CHECK.CPP					*/
void										checkLastChar(const char* nameInfile, std::ofstream& outfile);
std::pair<std::ifstream*, std::ofstream*>	checkArgs(int argc, char **argv);

/*		ERROR.CPP					*/
void										errorMsg(int error, std::string	msg);

/*		SEARCHANDREPLACE.CPP		*/
void										readInfile(std::ifstream& infile, std::string& readed, size_t size);
void										replaceStr(std::string& readed, std::string search, std::string replace);
void										writeOutfile(std::ofstream& outfile, std::string& readed, size_t size);

#endif
