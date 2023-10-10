#ifndef HARL_H
# define HARL_H

# include <string>

class Harl
{
public:
	Harl( void );
	~Harl( void );

	void	complain( std::string level );

private:
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );
	int			_strToInt( const std::string& key ) const;

};

#endif