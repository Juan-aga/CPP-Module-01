#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string nameA, Weapon &weaponA) : name(nameA), weapon(weaponA)
{
	if (DEBUG)
	{
		std::cout << "Constructor for HumanA " << this->name;
		std::cout << " weapon " << this->weapon.getType() << std::endl;
	}
}

HumanA::~HumanA( void )
{
	if (DEBUG)
		std::cout << "Destructor for HumanA " << this->name << std::endl;
}

void	HumanA::attack( void )
{
	if (weapon.getType().empty())
	{
		std::cerr << this->name << " can't attack" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
