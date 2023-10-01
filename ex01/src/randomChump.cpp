#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie nZombie = Zombie();

	nZombie.setName(name);
	nZombie.announce();
}
