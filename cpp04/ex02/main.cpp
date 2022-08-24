#include "main.h"

int main() {
    // {
    //     const Animal* j = new Dog();
    //     const Animal* i = new Cat();
    //     std::cout << std::endl;
    //     delete j;//should not create a leak
    //     delete i;
    // }

    // {
    //     int count = 6;
    //     Animal *animals[count];
    //     for (int i = 0; i < count / 2; i++) {animals[i] = new Dog();}
    //     for (int i = count / 2; i < count; i++) {animals[i] = new Cat();}
    //     std::cout << std::endl;
    //     for (int i = 0; i < count; i++) {delete animals[i];}
    // }

    // {
    //     Dog basic;
    //     Dog tmp = basic;
    //     std::cout << std::endl;
    // }

    // {
    //     Animal an = Animal();
    // }

    return 0;
}
