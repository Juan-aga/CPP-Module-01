#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie*	nZombie = new Zombie();

	nZombie->setName(name);
	return nZombie;
}
