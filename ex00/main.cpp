#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	Zombie* z1 = newZombie("Jan-Åge");

	z1->announce();
	randomChump("Pål-Roar");
	delete z1;
}
