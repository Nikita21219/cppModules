#include "main.h"

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    ~WrongAnimal();
    void makeSound() const;
    std::string getType() const;
};
