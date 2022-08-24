# include "ClapTrap.h"

FragTrap::FragTrap() {
    std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "Constructor FragTrap called for " << getName() << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor FragTrap called for " << getName() << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High five✋" << std::endl;
}
