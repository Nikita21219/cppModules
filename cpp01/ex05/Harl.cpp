#include "Harl.h"

void Harl::complain(std::string level) {
    void (Harl::*functionsArr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levelsName[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i++)
        if (level == levelsName[i])
            (this->*functionsArr[i])();
}

void Harl::debug(void) {std::cout << "Debug mode" << std::endl;}

void Harl::info(void) {std::cout << "Info mode" << std::endl;}

void Harl::warning(void) {std::cout << "Warning mode" << std::endl;}

void Harl::error(void) {std::cout << "Error mode" << std::endl;}
