#include "main.h"

class Cat : public Animal {
public:
    Cat();
    virtual ~Cat();
    void makeSound() const;
};
