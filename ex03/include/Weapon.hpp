#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class	Weapon
{
public:

	typedef	Weapon	t;

	Weapon( std::string weapon );
	~Weapon( void );
	Weapon( void );

	const std::string&	getType( void ) const;
	void				setType( std::string newType );

private:
	std::string	type;

};

#endif
