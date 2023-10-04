#ifndef HARL_H
# define HARL_H

# include <string>

class Harl
{

private:
	enum	_LEVEL{
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		LEVEL_SIZE
	};
	const char * _levelStr[LEVEL_SIZE]; 

	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

	typedef void (Harl::*_pointerFunctions)();
	_pointerFunctions pointerFunction[LEVEL_SIZE];
	bool	_checkLevel( std::string level);

public:
	Harl( void );
	~Harl( void );

	void	complain( std::string level );


};

#endif
