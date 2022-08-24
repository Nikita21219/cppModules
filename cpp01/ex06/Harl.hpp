#include "Harl.h"

class Harl {
public:
    void complain(std::string level);
    size_t getNumMode(std::string level);

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};
