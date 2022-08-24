#include "main.h"

class Dog : public Animal {
public:
    Dog();
    virtual ~Dog();
    void makeSound() const;
};
