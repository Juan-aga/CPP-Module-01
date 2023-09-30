#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{

public:

	Zombie( void );
	~Zombie( void );

	void	announce( void );
	void	setName( std::string name );

private:
	std::string name;

};

#endif
