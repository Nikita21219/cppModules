#include "main.h"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice") {
    std::cout << "Constructor for Ice" << std::endl;
}

Ice::~Ice() {
    std::cout << "Destructor for Ice" << std::endl;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
