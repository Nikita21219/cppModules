#include "main.h"

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &other);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};
