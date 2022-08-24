#include "main.h"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure") {
    std::cout << "Constructor for Cure" << std::endl;
}

Cure::~Cure() {
    std::cout << "Destructor for Cure" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}
void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
