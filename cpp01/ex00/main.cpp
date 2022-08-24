#include "Zombie.h"

int main() {
    Zombie *bob = newZombie("Bob");
    Zombie *ghouls = newZombie("Ghouls");
    Zombie *saifu = newZombie("Saifu");
    std::cout << std::endl;
    randomChump("Shaun");
    randomChump("Zack");
    randomChump("Fido");
    std::cout << std::endl;
    delete bob;
    delete ghouls;
    delete saifu;
    return 0;
}
