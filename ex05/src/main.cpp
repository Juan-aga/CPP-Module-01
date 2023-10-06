#include "Harl.hpp"
#include <iostream>

int	main( int ac, char** av )
{
	Harl	harl;

/*	FOR CORRECTION
	if (ac == 1)
	{
		harl.complain( "DEBUG" );
		harl.complain( "INFO" );
		harl.complain( "WARNING" );
		harl.complain( "ERROR" );
		harl.complain( "FAIL");
	}
*/	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "Usage:\n\t" << av[0] << " <level>" << std::endl;
	return 0;
}
