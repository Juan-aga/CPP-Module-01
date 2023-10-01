#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string nameB ) : name(nameB), weapon(NULL)
{
	if (DEBUG)
	{
		std::cout << "Constructor for HumanB " << this->name;
		if (this->weapon)
			std::cout << " weapon " << this->weapon->getType();
		std::cout << std::endl;
	}
}

HumanB::~HumanB( void )
{
	if (DEBUG)
		std::cout << "Destructor for HumanB " << this->name << std::endl;
}

void	HumanB::attack( void )
{
	if (!this->weapon || this->weapon->getType().empty())
	{
		std::cerr << this->name << " can't attack." << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weaponB )
{
	if (DEBUG)
	{
		std::cout << this->name;
		if (weaponB.getType().empty())
			std::cout << " has been disarmed." << std::endl;
		else
		{
			if (!this->weapon || this->weapon->getType().empty())
				std::cout << " has been armed with ";
			else
				std::cout << " has switched from " << this->weapon->getType() << " to ";
			std::cout << weaponB.getType() << std::endl;
		}
	}
	this->weapon = &weaponB;
}
