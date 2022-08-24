#include "main.h"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    void makeSound() const;
};
