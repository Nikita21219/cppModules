#include "main.h"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) {
    std::cout << "Constructor for Character" << std::endl;
    this->name = name;
}

Character::Character(const Character &other) {
    std::cout << "Character copy constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
}

Character::~Character() {
    std::cout << "Destructor for Character" << std::endl;
    for (size_t i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];
}

Character &Character::operator = (Character &other) {
    std::cout << "Character copy assigment called" << std::endl;
    for (size_t i = 0; inventory[i]; i++)
        this->inventory[i] = other.inventory[i]->clone();
    return *this;
}

std::string const & Character::getName() const {return name;}

void Character::equip(AMateria* m) {
    int i = 0;
    while (inventory[i])
        i++;
    if (i > 3) {
        std::cout << "❌Inventory is full" << std::endl;
        return;
    }
    inventory[i] = m;
    std::cout << "✅Inventory is equip" << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx <= 3 && inventory[idx]) {
        std::cout << "✅Unequip done" << std::endl;
        inventory[idx] = NULL;
    }
    else
        std::cout << "❌Unequip called fail" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx <= 3 && inventory[idx])
        inventory[idx]->use(target);
    else
        std::cout << "❌Use called fail" << std::endl;
}
