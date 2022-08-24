# include "ClapTrap.h"

class ClapTrap {
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    void setName(std::string name);
    void setHitPoints(int hitPoints);
    void setEnergyPoints(int energyPoints);
    void setAttackDamage(int attackDamage);
    std::string getName();
    int getHitPoints();
    int getEnergyPoints();
    int getAttackDamage();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
