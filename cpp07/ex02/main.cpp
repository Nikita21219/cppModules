#include "account.h"

int main() {
    // Create arrays
    unsigned int length = 10;
    Account<int> account1(length);
    Account<int> account2(account1);
    Account<int> accountEmpty;

    // Display size arrays
    std::cout << "accout1 length = " << account1.size() << std::endl;
    std::cout << "accout2 length = " << account2.size() << std::endl;
    std::cout << "accout2 length = " << accountEmpty.size() << std::endl;

    // Fill arrays
    int idx = 0;
    for (size_t i = 50; i > 50 - length; i--)
        account1[idx++] = i;
    for (size_t i = 0; i < length; i++)
        account2[i] = i;

    std::cout << std::endl;

    // Display arrays
    for (size_t i = 0; i < length; i++)
        std::cout << account1[i] << std::endl;
    std::cout << std::endl;
    for (size_t i = 0; i < length; i++)
        std::cout << account2[i] << std::endl;

    std::cout << std::endl;

    // Index is negative
    try {
        std::cout << account1[-100] << std::endl;
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    // Index is bigger than size
    try {
        std::cout << account1[100] << std::endl;
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    // Index in empty array
    try {
        std::cout << accountEmpty[1] << std::endl;
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
