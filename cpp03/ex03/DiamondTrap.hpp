# include "ClapTrap.h"

class DiamondTrap : public virtual FragTrap, public virtual ScavTrap {
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void attack(const std::string& target);
    void whoAmI();
};
