#include "main.h"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "Constructor MateriaSource called" << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << "Destructor MateriaSource called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        if (templates[i])
            delete templates[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    int i = 0;
    while (templates[i])
        i++;
    if (i < 4) {
        templates[i] = m;
        std::cout << "✅Materia is learned" << std::endl;
    }
    else
        std::cout << "❌Templates is full" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (size_t i = 0; i < 4; i++) {
        if (templates[i] && templates[i]->getType() == type) {
            std::cout << "✅Materia is created" << std::endl;
            return templates[i]->clone();
        }
    }
    std::cout << "❌Materia creation fail" << std::endl;
    return NULL;
}
