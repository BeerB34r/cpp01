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
	Harl::complain("");
	try { Harl::complain(NULL); } catch (std::exception &err) { std::cerr << err.what() << std::endl; }

	Harl::replies("ERROR");
	Harl::replies("WARNING");
	Harl::replies("INFO");
	Harl::replies("DEBUG");
	Harl::replies("random text that wont trigger the other answers");
	Harl::replies("");
	try { Harl::replies(NULL); } catch (std::exception &err) { std::cerr << err.what() << std::endl; }
}

int	main(int ac, char **av) {
	switch (ac) {
		case 1: {
			test_harl();
			break ;
		}
		case 2: {
			Harl::replies(av[1]);
			break ;
		}
		default: {
			std::cerr << "invalid argument count" << std::endl;
		}
	}
}
