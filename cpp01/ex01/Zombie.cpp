#include "Zombie.h"

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " died" << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

