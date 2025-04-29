#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
}

HumanA::HumanA(const HumanA& other) : weapon(other.weapon) {
	this->name = other.name;
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
