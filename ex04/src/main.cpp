#include "searchAndReplace.hpp"

int	main( int argc, char** argv )
{
	std::string		readed;
	
	std::pair<std::ifstream*, std::ofstream*> files = checkArgs(argc, argv);

	std::string		search = argv[2];
	std::string		replace = argv[3];

	if (DEBUG)
		std::cerr << "Searching: " << argv[2] << " Replacing: " << argv[3] << std::endl;
	while (files.first->peek() != EOF)
	{
		readInfile(*(files.first), readed, search.length());
		replaceStr(readed, search, replace);
		writeOutfile(*(files.second), readed, search.length());
	}
	files.first->close();
	delete files.first;
	checkLastChar(argv[1], *(files.second));
	delete files.second;
	return 0;
}
