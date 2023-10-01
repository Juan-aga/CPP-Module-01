#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class	Weapon
{
public:
	Weapon( std::string weapon );
	~Weapon( void );
	
	const std::string&	getType( void );
	void			setType( std::string newType );

private:
	std::string	type;
};

#endif
