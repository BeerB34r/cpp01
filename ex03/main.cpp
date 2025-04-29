#include <iostream>

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	roar("Roar", club);
		roar.attack();
		club.setType("well-made spikeless club");
		roar.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	stein("Stein");
		stein.setWeapon(club);
		stein.attack();
		club.setType("well-made spikeless club");
		stein.attack();
	}
	{
		HumanB	per("Per");
		try { per.attack(); } catch (std::exception& err) {
			std::cerr << err.what() << std::endl;
		}
	}
}
