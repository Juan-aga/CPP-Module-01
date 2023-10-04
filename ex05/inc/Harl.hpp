#ifndef HARL_H
# define HARL_H

# include <string>

class Harl
{

private:
	enum	_LEVEL {
		DEBUG_LEVEL,
		INFO,
		WARNING,
		ERROR,
		LEVEL_SIZE
	};

	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );
	int			_hash(const std::string& key, int index) const;

	typedef void	(Harl::*_functionPtr)();
	typedef struct	s_lstFunc {
		const char*		level;
		_functionPtr	function;
		int				key;
	}	t_lstFunc;

	t_lstFunc	functions[LEVEL_SIZE];
	bool	_checkLevel( std::string level);

public:
	Harl( void );
	~Harl( void );

	void	complain( std::string level );


};

#endif
