#include "Harl.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 1;
    }
    Harl harl;
    switch (harl.getNumMode(argv[1])) {
    case 1:
        harl.complain("DEBUG");
    case 2:
        harl.complain("INFO");
    case 3:
        harl.complain("WARNING");
    case 4: {
        harl.complain("ERROR");
        break;
    }
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}
