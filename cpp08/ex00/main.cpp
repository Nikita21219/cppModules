#include "easyfind.h"

int main() {
    std::vector<int> container;
    container.push_back(42);
    container.push_back(21);
    container.push_back(53);
    container.push_back(59);
    container.push_back(999);
    
    try {
        std::cout << easyfind(container, 42) << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    try {
        std::cout << easyfind(container, 100) << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
