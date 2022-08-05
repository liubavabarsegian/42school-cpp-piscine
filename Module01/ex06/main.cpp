#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << "ERROR: wrong number of arguments. Expected 1." << std::endl;
		return 1;
	}
	karen.filter(argv[1]);
	return 0;
}