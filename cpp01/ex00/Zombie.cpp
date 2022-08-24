#include "Zombie.h"

Zombie::Zombie(std::string name) {this->name = name;}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " died" << std::endl;
}
