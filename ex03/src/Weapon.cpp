#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string weapon ) : type(weapon)
{
	if (DEBUG)
		std::cout << "Constructor Weapon with type: " << this->type << std::endl;
}

Weapon::~Weapon( void )
{
	if (DEBUG)
		std::cout << "Destructor Weapon called." << std::endl;
}

const std::string&	Weapon::getType( void )
{
	const std::string&	weaponREF = this->type;

	return weaponREF;
}

void			Weapon::setType( std::string newType )
{
	if (DEBUG)
		std::cout << "Change Weapon: " << this->type << " for: " << newType << std::endl;
	this->type = newType;
}

std::string type;
