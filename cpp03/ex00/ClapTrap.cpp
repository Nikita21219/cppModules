# include "ClapTrap.h"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "Constructor ClapTrap called for " << name << std::endl;
    setName(name);
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor ClapTrap called for " << name << std::endl;
}

void ClapTrap::setName(std::string name) {this->name = name;}

void ClapTrap::setHitPoints(int hitPoints) {this->hitPoints = hitPoints;};

void ClapTrap::setEnergyPoints(int energyPoints) {this->energyPoints = energyPoints;}

void ClapTrap::setAttackDamage(int attackDamage) {this->attackDamage = attackDamage;}

std::string ClapTrap::getName() {return name;}

int ClapTrap::getHitPoints() {return hitPoints;}

int ClapTrap::getEnergyPoints() {return energyPoints;}

int ClapTrap::getAttackDamage() {return attackDamage;}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0) {
        energyPoints -= 1;
        hitPoints += amount;
        std::cout << name << " repairs itself. It gets +" << amount << " hit points" << std::endl;
    }
    else {
        std::cout << "I can't do anything 😣" << std::endl;
    }
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints -= 1;
    }
    else
        std::cout << "I can't do anything 😣" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints - amount <= 0) {
        delete this;
        return;
    }
    hitPoints -= amount;
    std::cout << "ClapTrap " << name << " take damage " << amount << ". His hit points: " << hitPoints << std::endl;
}
