# include "ClapTrap.h"

int main() {
    ScavTrap s = ScavTrap("s");
    s.attack("Zack");
    s.guardGate();
    std::cout << std::endl;
    std::cout << std::endl;
    s.attack("Bob");
    return 0;
}
