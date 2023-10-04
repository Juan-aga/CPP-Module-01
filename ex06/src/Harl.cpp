#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
	if (DBUG)
	{
		std::cerr << "Level: DEBUG	key: " << _strToInt("DEBUG") << std::endl;
		std::cerr << "Level: INFO	key: " << _strToInt("INFO") << std::endl;
		std::cerr << "Level: WARNING	key: " << _strToInt("WARNING") << std::endl;
		std::cerr << "Level: ERROR	key: " << _strToInt("ERROR") << std::endl;
	}
}

Harl::~Harl( void )
{
}

int		Harl::_strToInt( const std::string& key ) const
{
	int	value;

	value = 0;
	for (size_t i = 0; i < key.length(); i++)
	{
		value *= 10;
		value += static_cast<int>(key[i]);
	}
	return value;
}

void	Harl::complain( std::string level )
{
	size_t	key;

	key = _strToInt(level);
	if (DBUG)
		std::cerr << "level: " << level << " key: " << key << std::endl;
	switch (key)
	{
		case 756521:
			Harl::debug();
			break ;
		case 81579:
			Harl::info();
			break ;
		case 94406151:
			Harl::warning();
			break ;
		case 781072:
			Harl::error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl << std::endl;
	Harl::info();
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
	Harl::warning();
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	Harl::error();
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}
