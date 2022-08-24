#include "main.h"

WrongAnimal::WrongAnimal() {
    std::cout << "Constructor for WrongAnimal" << std::endl;
    type = "'WrongAnimal'";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor for WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Meta sound" << std::endl;
}

std::string WrongAnimal::getType() const {return type;}
