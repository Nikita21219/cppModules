#include "main.h"

Dog::Dog() {
    std::cout << "Constructor for Dog" << std::endl;
    type = "'dog'";
    brain = new Brain();
}

Dog::Dog(const Dog &other) {
    std::cout << "A copy constructor called for Dog" << std::endl;
    this->brain = new Brain;
    std::string *ideasOther = other.brain->getIdeas();
    for (size_t i = 0; i < 100; i++)
        this->brain->setIdea(ideasOther[i], i);
}

Dog::~Dog() {
    std::cout << "Destructor for Dog" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}
