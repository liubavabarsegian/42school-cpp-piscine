#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	Zombie	*bunch_of_idiots = zombieHorde(19, "Alex");

	for(int i = 0; i < 19; i++)
		bunch_of_idiots[i].announce();

	delete [] bunch_of_idiots;
}