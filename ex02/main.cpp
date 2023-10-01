#include <iostream>
#include <string>

int	main( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "memory string:\t\t" << &string << std::endl;
	std::cout << "memory stringPTR:\t" << stringPTR << std::endl;
	std::cout << "memory stringREF:\t" << &stringREF << std::endl;

	std::cout << "value string:\t\t" << string << std::endl;
	std::cout << "value stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "value stringREF:\t" << stringREF << std::endl;

	return 0;
}
