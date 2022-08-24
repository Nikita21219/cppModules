#include "main.h"

WrongCat::WrongCat() {
    std::cout << "Constructor for WrongCat" << std::endl;
    type = "'WrongCat'";
}

WrongCat::~WrongCat() {
    std::cout << "Destructor for WrongCat" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow" << std::endl;
}
