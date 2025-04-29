#include <iostream>
#include <stdexcept>

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB(const HumanB& other) {
	this->name = other.name;
	this->weapon = other.weapon;
}

HumanB::~HumanB() {
}

void	HumanB::attack() {
	if (!this->weapon) {
		throw std::logic_error("Weapon not initialised");
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
