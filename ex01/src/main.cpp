
#include "Zombie.hpp"

#define HORDE 10

Zombie* zombieHorde( int N, std::string name );

int	main( void )
{
	Zombie*	nZombie;

	nZombie = zombieHorde(HORDE, "zH");
	for (int i = 0; i < HORDE; i++)
		nZombie[i].announce();	
	delete [] nZombie;
	return 0;
}
