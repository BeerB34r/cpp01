#include "Harl.hpp"
#include <iostream>
#include <random>
#include <string_view>

static constexpr uint64_t	hash(const std::string_view & str) {
	uint64_t	out = 5381;

	for (const char & c : str) {
		out = (33 * out) ^ c;
	}
	return out;
}

Harl::Harl() {
}

Harl::~Harl() {
}

static constexpr uint64_t operator"" _hash(const char* str, size_t len) {
	return hash(std::string_view(str, len));
}


//	this entire bit of code would be a lot cleaner if i didnt have to use
//	pointers to member functions. if this was not a strict requirement, each of
//	the cases would just call the goddamned function directly. but, to prove
//	that i know the syntax (a trivial endeavor), here is an abomination.
void	Harl::complain(std::string level) {
	void (Harl::* func)(void);

	switch (hash(level)) {
		case "DEBUG"_hash: {
			func = &Harl::debug;
			break ;
		}
		case "INFO"_hash: {
			func = &Harl::info;
			break ;
		}
		case "WARNING"_hash: {
			func = &Harl::warning;
			break ;
		}
		case "ERROR"_hash: {
			func = &Harl::error;
			break ;
		}
		default: {
			std::cout << "* incoherent rambling *" << std::endl;
			std::cerr << "level not found" << std::endl;
			return ;
		}
	}
	Harl harl;
	(harl.*func)();
}

void	Harl::replies(std::string level) {
	switch (hash(level)) {
		case "DEBUG"_hash: {
			std::cout << "[ DEBUG ]" << std::endl;
			for (int i = 0; i < 2; i++) {
				std::cout << debugMessages[i] << std::endl;
			}
			std::cout << std::endl;
		}
		case "INFO"_hash: {
			std::cout << "[ INFO ]" << std::endl;
			for (int i = 0; i < 2; i++) {
				std::cout << infoMessages[i] << std::endl;
			}
			std::cout << std::endl;
		}
		case "WARNING"_hash: {
			std::cout << "[ WARNING ]" << std::endl;
			for (int i = 0; i < 2; i++) {
				std::cout << warningMessages[i] << std::endl;
			}
			std::cout << std::endl;
		}
		case "ERROR"_hash: {
			std::cout << "[ ERROR ]" << std::endl;
			for (int i = 0; i < 2; i++) {
				std::cout << errorMessages[i] << std::endl;
			}
			std::cout << std::endl;
			break ;
		}
		default: {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
	std::uniform_int_distribution random(0,1);

	std::cout << Harl::debugMessages[random(engine)] << std::endl;
}

const std::string Harl::infoMessages[2] = {
	"i asked for the double triple bossy deluxe, on a raft, four-by-four animal-style, extra shingles with a shimmy and a squeeze, light axle grease, make it cry, burn it, and let it swim, but theres no pickles on this! i clearly asked for pickles!",
	"the 2 number 9s, the number 9 large, the number 6 with extra dip, the number 7, the two number 45s, one with cheese, and the large soda are for me and my friends to share. i do not intend to eat the entire order myself",
};

void	Harl::info() {
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::uniform_int_distribution random(0,1);

	std::cout << Harl::infoMessages[random(engine)] << std::endl;
}

const std::string Harl::warningMessages[2] = {
	"My cousin's girlfriend's father's golf-buddy actually owns this joint, so you better treat me well!",
	"I have many influential friends, so you best be careful!",
};

void	Harl::warning() {
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::uniform_int_distribution random(0,1);

	std::cout << Harl::warningMessages[random(engine)] << std::endl;
}

const std::string Harl::errorMessages[2] = {
	"i'd like to speak to the manager!",
	"you're getting a 1 star review!",
};

void	Harl::error() {
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::uniform_int_distribution random(0,1);

	std::cout << Harl::errorMessages[random(engine)] << std::endl;
}
