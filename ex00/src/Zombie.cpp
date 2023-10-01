#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ) : name(name)
{
	if (DEBUG)
		std::cerr << "Constructor Zombie called." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << ": Destroyed." << std::endl;
	this->name = "";
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	name;
