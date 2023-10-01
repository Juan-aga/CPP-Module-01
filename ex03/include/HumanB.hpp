#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <string>

class	HumanB
{
public:
	HumanB( std::string nameB);
	~HumanB( void );

	void	attack( void );
	void	setWeapon( Weapon &weaponB );

private:
	std::string	name;
	Weapon		*weapon;
};

#endif
