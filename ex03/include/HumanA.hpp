#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <string>

class	HumanA
{
public:
	HumanA( std::string nameA, Weapon &weaponA );
	~HumanA( void );

	void	attack( void );

private:
	std::string	name;
	Weapon		&weapon;
};

#endif
