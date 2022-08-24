# include "ClapTrap.h"

int main() {
    FragTrap f("Anthony");

    std::cout << std::endl << std::endl;
    
    std::cout << "Name: " << f.getName() << \
    "\nHit Points: " << f.getHitPoints() << \
    "\nEnergy Points: " << f.getEnergyPoints() << \
    "\nAttack Damage: " << f.getAttackDamage() << std::endl;
    std::cout << std::endl << std::endl;

    f.highFivesGuys();

    std::cout << std::endl << std::endl;
    return 0;
}
