# include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};
