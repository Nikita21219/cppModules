#include "main.h"

class Brain {
private:
    std::string ideas[100];

public:
    Brain();
    ~Brain();
    std::string *getIdeas();
    void setIdea(std::string idea, int idx);
};
