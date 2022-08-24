#include "main.h"

Cat::Cat() {
    std::cout << "Constructor for Cat" << std::endl;
    type = "'cat'";
    brain = new Brain();
}

Cat::Cat(const Cat &other) {
    std::cout << "A copy constructor called for Cat" << std::endl;
    this->brain = new Brain;
    std::string *ideasOther = other.brain->getIdeas();
    for (size_t i = 0; i < 100; i++)
        this->brain->setIdea(ideasOther[i], i);
}

Cat::~Cat() {
    std::cout << "Destructor for Cat" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}
