#include "Harl.hpp"

#include <iostream>

void	test_harl() {
	Harl::complain("DEBUG");
	Harl::complain("DEBUG");
	Harl::complain("DEBUG");
	Harl::complain("INFO");
	Harl::complain("INFO");
	Harl::complain("INFO");
	Harl::complain("WARNING");
	Harl::complain("WARNING");
	Harl::complain("WARNING");
	Harl::complain("ERROR");
	Harl::complain("ERROR");
	Harl::complain("ERROR");
	Harl::complain("debug");
	Harl::complain("info");
	Harl::complain("warning");
	Harl::complain("error");
}

int	main(int ac, char **av) {
	switch (ac) {
		case 1: {
			test_harl();
			break ;
		}
		case 2: {
			Harl::complain(av[1]);
			break ;
		}
		default: {
			std::cerr << "invalid argument count" << std::endl;
		}
	}
}
