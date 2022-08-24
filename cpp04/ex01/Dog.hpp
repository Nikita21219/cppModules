#include "main.h"

class Dog : public Animal {
private:
    Brain* brain;

public:
    Dog();
    Dog(const Dog &other);
    virtual ~Dog();
    void makeSound() const;
};
