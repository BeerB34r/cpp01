#include "Harl.hpp"
#include <iostream>
#include <random>

enum Harl::level Harl::think(std::string thought) {
	if ("DEBUG" == thought) return Harl::level::DEBUG;
	if ("INFO" == thought) return Harl::level::INFO;
	if ("WARNING" == thought) return Harl::level::WARNING;
	if ("ERROR" == thought) return Harl::level::ERROR;
	return 5;
}

void	Harl::complain(std::string level) {
	switch (Harl::think(level)) {
		case Harl::level::DEBUG: {
			Harl::debug();
			break ;
		}
		case Harl::level::INFO: {
			Harl::info();
			break ;
		}
		case Harl::level::WARNING: {
			Harl::warning();
			break ;
		}
		case Harl::level::ERROR: {
			Harl::error();
			break ;
		}
		default: {
			std::cout << "* incoherent rambling *" << std::endl;
			std::cerr << "level not found" << std::endl;
			break ;
		}
	}
}

const std::string Harl::debugMessages[2] = {
	"I'll take a Double Triple Bossy Deluxe, on a raft, four-by-four animal-style, extra shingles with a shimmy and a squeeze, light axle grease, make it cry, burn it, and let it swim",
	"I’ll have two number 9s, a number 9 large, a number 6 with extra dip, a number 7, two number 45s, one with cheese, and a large soda.",
};

void	Harl::debug() {
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::uniform_int_distribution random(0,2);

	std::cout << Harl::debugMessages[random(engine)] << std::endl;
}

const std::string Harl::infoMessages[2] = {
	"i asked for the double triple bossy deluxe, on a raft, four-by-four animal-style, extra shingles with a shimmy and a squeeze, light axle grease, make it cry, burn it, and let it swim, but theres no pickles on this! i clearly asked for pickles!",
	"the 2 number 9s, the number 9 large, the number 6 with extra dip, the number 7, the two number 45s, one with cheese, and the large soda are for me and my friends to share. i do not intend to eat the entire order myself",
};

void	Harl::info() {
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::uniform_int_distribution random(0,2);

	std::cout << Harl::infoMessages[random(engine)] << std::endl;
}

const std::string Harl::warningMessages[2] = {
	"My cousin's girlfriend's father's golf-buddy actually owns this joint, so you better treat me well!",
	"I have many influential friends, so you best be careful!",
};

void	Harl::warning() {
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::uniform_int_distribution random(0,2);

	std::cout << Harl::warningMessages[random(engine)] << std::endl;
}

const std::string Harl::errorMessages[2] = {
	"i'd like to speak to the manager!",
	"you're getting a 1 star review!",
};

void	Harl::error() {
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::uniform_int_distribution random(0,2);

	std::cout << Harl::errorMessages[random(engine)] << std::endl;
}
