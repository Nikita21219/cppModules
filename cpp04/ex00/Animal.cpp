#include "main.h"

Animal::Animal() {
    std::cout << "Constructor for Animal" << std::endl;
    type = "'animal'";
}

Animal::~Animal() {
    std::cout << "Destructor for Animal" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Meta sound" << std::endl;
}

std::string Animal::getType() const {return type;}
