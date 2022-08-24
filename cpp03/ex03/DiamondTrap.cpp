# include "ClapTrap.h"

DiamondTrap::DiamondTrap() {
    std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    this->name = name;
    std::string partName = "_clap_name";
    ClapTrap::setName(name + partName);
    setHitPoints(FragTrap::getHitPoints());
    setEnergyPoints(ScavTrap::getEnergyPoints());
    setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap constructor called for " << name << std::endl;
}

DiamondTrap::~DiamondTrap() {  
    std::cout << "Destructor DiamondTrap called for " << name << std::endl;
};

void DiamondTrap::attack(const std::string& target) {ScavTrap::attack(target);}

void DiamondTrap::whoAmI() {
    std::cout << "whoAmI called" << std::endl;
    std::cout << "DiamondTrap name is " << name << " ClapTrap name is " << ClapTrap::name << std::endl;
}
