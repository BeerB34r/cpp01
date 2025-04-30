#include "Harl.hpp"

#include <iostream>

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
