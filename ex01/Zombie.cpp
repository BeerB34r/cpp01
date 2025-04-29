#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::Zombie(const Zombie& other) {
	this->name = other.name;
}

Zombie::~Zombie() {
	std::cerr << "Zombie " << this->name << " destroyed" << std::endl;
}

void	Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::christen(std::string name) {
	this->name = name;
}
