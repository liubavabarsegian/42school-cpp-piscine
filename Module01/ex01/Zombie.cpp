#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Zombie " << _name << " is alive!!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dead." << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}