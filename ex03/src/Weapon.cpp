#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string weapon )
{
	this->type = weapon;
	if (DEBUG)
		std::cout << "Constructor Weapon with type: " << this->type << std::endl;
}

Weapon::~Weapon( void )
{
	if (DEBUG)
		std::cout << "Destructor Weapon called." << std::endl;
}

const std::string&	Weapon::getType( void ) const
{
	return this->type;
}

void			Weapon::setType( std::string newType )
{
	if (DEBUG)
	{
		std::cout << "Switched Weapon from " << this->type;
		this->type = newType;
		std::cout << " to " << this->type << std::endl;
	}
	this->type = newType;
}
