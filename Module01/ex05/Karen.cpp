#include "Karen.hpp"

Karen::Karen()
{
	action[0] = &Karen::debug;
	action[1] = &Karen::info;
	action[2] = &Karen::warning;
	action[3] = &Karen::error;
}

void	Karen::debug( void )
{
	std::cout 	<< "DEBUG:" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Karen::info( void )
{
	std::cout	<< "INFO: " << std::endl
				<< "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout	<< "WARNING:" << std::endl
				<< "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout	<<"ERROR:" << std::endl
				<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	std::string		message_up[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string		message_low[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if ((level == message_up[i]) || (level == message_low[i]))
		{
			(this->*action[i])();
			break;
		}
	}
}