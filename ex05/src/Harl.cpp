#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
	functions[DEBUG_LEVEL] = (t_lstFunc){ "DEBUG", &Harl::debug, -1 };
	functions[INFO] = (t_lstFunc){ "INFO", &Harl::info, -1 };
	functions[WARNING] = (t_lstFunc){ "WARNING", &Harl::warning, -1 };
	functions[ERROR] = (t_lstFunc){ "ERROR", &Harl::error, -1 };
	for (int i = 0; i < LEVEL_SIZE; i++)
		functions[i].key = _hash(functions[i].level, i);
	if (DBUG)
		for (int i = 0; i < LEVEL_SIZE; i++)
			std::cerr << "Level: " << functions[i].level << " key: " << functions[i].key << std::endl;
}

Harl::~Harl( void )
{
}

int		Harl::_hash(const std::string& key, int index) const
{
	int	value;

	value = 0;
	for (size_t i = 0; i < key.length() && i < 5; i++)
		value += static_cast<int>(key[i]) + index;
	return (value + 1) % LEVEL_SIZE;;
}

void	Harl::complain( std::string level )
{
	size_t	hash;
	size_t	index;

	hash = _hash(level, 0);
	index = (hash) % LEVEL_SIZE;
	if (DBUG)
		std::cerr << "level: " << level << " hash: " << hash << " index: " << index << std::endl;
	if (functions[index].level && level == functions[index].level)
		(this->*functions[index].function)();
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
