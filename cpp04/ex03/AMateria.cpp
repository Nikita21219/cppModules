#include "main.h"
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    this->type = type;
    std::cout << "Constructor for AMateria" << std::endl;
}

AMateria::~AMateria () {
    std::cout << "Destructor for AMateria" << std::endl;
}

std::string const &AMateria::getType() const {return type;}

void AMateria::use(ICharacter& target) {
    (void) target;
    // target->use();
}
