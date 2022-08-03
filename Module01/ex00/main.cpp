#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*Avo = newZombie("Avo");
	Zombie	*Jacob = newZombie("Jacob");
	Zombie	*Shahen = newZombie("Shahen");

	newZombie("Alex");

	Avo->announce();
	Jacob->announce();
	Shahen->announce();

	randomChump("Gevorg");
	randomChump("Vlad");
	
	delete Shahen;
	delete Jacob;
	delete Avo;
}