# include "ClapTrap.h"

int main() {
    DiamondTrap test("hello");
    std::cout << std::endl << std::endl;
    test.whoAmI();
    std::cout << std::endl << std::endl;
    test.attack("Bob");
    std::cout << std::endl << std::endl;
    return 0;
}
