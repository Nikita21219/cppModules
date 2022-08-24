# include "ClapTrap.h"

ScavTrap::ScavTrap() {
    std::cout << "Default constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "Constructor ScavTrap called for " << getName() << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor ScavTrap called for " << getName() << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints > 0) {
        std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints -= 1;
    }
    else
        std::cout << "I can't do anything 😣" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
