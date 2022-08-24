#include "main.h"

Cat::Cat() {
    std::cout << "Constructor for Cat" << std::endl;
    type = "'cat'";
}

Cat::~Cat() {
    std::cout << "Destructor for Cat" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}
