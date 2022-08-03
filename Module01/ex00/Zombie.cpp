#include "Zombie.hpp"

void	Zombie::announce(void)
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

Zombie* newZombie( std::string name )
{
	return (new Zombie(name));
}

void randomChump( std::string name )
{
	Zombie	weak_zombie(name);
	weak_zombie.announce();
}
