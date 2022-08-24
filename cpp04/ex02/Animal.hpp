#include "main.h"

class Animal {
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    virtual void makeSound() const = 0;
    std::string getType() const;
};



// #include "main.h"

// class Animal {
// protected:
//     std::string type;

// public:
//     virtual void makeSound() const = 0;
// };
