#include "main.h"

Brain::Brain() {
    std::cout << "Constructor for Brain" << std::endl;
}

Brain::~Brain() {
    std::cout << "Destructor for Brain" << std::endl;
}

std::string *Brain::getIdeas() {return ideas;}

void Brain::setIdea(std::string idea, int idx) {
    ideas[idx] = idea;
}

