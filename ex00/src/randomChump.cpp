#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie nZombie = Zombie(name);

	nZombie.announce();
}
