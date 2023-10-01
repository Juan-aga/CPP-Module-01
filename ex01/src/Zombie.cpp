#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) : _index(Zombie::_numZ)
{
	this->name = "";
	
	Zombie::_numZ++;
	if (DEBUG)
		std::cerr << "Constructor for " << this->_index << " Zombie called." << std::endl;
}

Zombie::~Zombie( void )
{
	if (DEBUG)
		std::cout << "Destructor for " << this->_index << " Zombie called." << std::endl;
	std::cout << this->name << ": Destroyed." << std::endl;
	this->name = "";
	Zombie::_numZ--;
}

void	Zombie::announce( void )
{
	if (DEBUG)
		std::cout << "Anounce for " << this->_index << " Zombie." << std::endl;
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->name = name;
	if (DEBUG)
		std::cerr << "set name for " << this->_index << "to: " << name << std::endl;
}

std::string	name;

int	_index;

int	Zombie::_numZ = 0;
