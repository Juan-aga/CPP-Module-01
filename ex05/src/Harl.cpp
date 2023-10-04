#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
	pointerFunction[DEBUG] =&Harl::debug;
	pointerFunction[INFO] = &Harl::info;
	pointerFunction[WARNING] =&Harl::warning;
	pointerFunction[ERROR] =&Harl::error;

	
	_levelStr[DEBUG] = "DEBUG";
	_levelStr[INFO] = "INFO";
	_levelStr[WARNING] = "WARNING";
	_levelStr[ERROR] = "ERROR";

}

Harl::~Harl( void )
{
}


void	Harl::complain( std::string level )
{
//	void 	(Harl::*function)( void ) const;

	if (!Harl::_checkLevel(level))
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
//	else
//		this->*pointerFunction[level]();
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

bool	Harl::_checkLevel(std::string level)
{
	for (int i = 0; i < LEVEL_SIZE; i++)
	{
		if (level == _levelStr[i])
		{
			(this->*pointerFunction[i])();
			return true;
		}
	}
	return false;
}
