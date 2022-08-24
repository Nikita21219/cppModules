#include "main.h"

int main() {
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << std::endl << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        std::cout << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        std::cout << std::endl << std::endl;
        delete j;
        delete i;
        delete meta;
    }
    // {
    //     const WrongAnimal* meta = new WrongAnimal();
    //     const WrongAnimal* i = new WrongCat();
    //     std::cout << std::endl << std::endl;
    //     std::cout << i->getType() << " " << std::endl;
    //     std::cout << std::endl;
    //     i->makeSound();
    //     meta->makeSound();
    //     std::cout << std::endl << std::endl;
    //     delete i;
    //     delete meta;
    // }
    return 0;
}
