#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		Zombie() {};
		void	setName(std::string name);
		void	announce(void) const;
		~Zombie();
};

#endif