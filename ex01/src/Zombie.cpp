#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void )
{
	this->name = "";
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

void	Zombie::setName( std::string name )
{
	this->name = name;
	if (DEBUG)
		std::cerr << "set name to: " << name << std::endl;
}

std::string	name;
