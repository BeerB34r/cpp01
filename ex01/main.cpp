#include <iostream>

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(int ac, char **av) {
	if (ac != 3) {
		std::cout << "invalid argument count" << std::endl;
		return 1;
	}
	if (std::stoi(av[1]) < 0) {
		std::cout << "zombie count cannot be lower than 0"  << std::endl;
		return 1;
	}
	Zombie* horde = zombieHorde(std::stoi(av[1]), av[2]);
	for (int i = 0; i < std::stoi(av[1]); i++) {
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
