#include "main.h"

class Cat : public Animal {
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat &other);
    virtual ~Cat();
    void makeSound() const;
};
