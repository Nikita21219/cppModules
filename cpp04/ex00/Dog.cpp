#include "main.h"

Dog::Dog() {
    std::cout << "Constructor for Dog" << std::endl;
    type = "'dog'";
}

Dog::~Dog() {
    std::cout << "Destructor for Dog" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}

