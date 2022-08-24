#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "main.h"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria *templates[4];

public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria *createMateria(std::string const &);
};

#endif
