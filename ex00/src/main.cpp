
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main( void )
{
	Zombie*	nZombie;

	nZombie = newZombie("First");
	randomChump("Second");
	nZombie->announce();
	delete nZombie;
	return 0;
}
