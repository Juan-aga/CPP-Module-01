#include "searchAndReplace.hpp"
#include <stdlib.h>

static const char * errorStr[ERROR_SIZE] = {
	"Not valid arguments.",
	"Search can't be empty.",
	"Can't open infile ",
	"Can't create or open outfile "
};

void	errorMsg(int error, std::string	msg)
{
	std::cerr << errorStr[error];
	if (!msg.empty())
		std::cerr << msg;
	std::cerr << std::endl;
	exit(-1);
}
