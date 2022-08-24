# include "ClapTrap.h"

int main() {
    ClapTrap c1 = ClapTrap("c1");
    c1.takeDamage(7);
    c1.attack("Foo");
    c1.beRepaired(4);
    return 0;
}
