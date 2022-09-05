#include "iter.h"

int main() {
    {
        std::cout << "Int:" << std::endl;
        const int length = 4;
        int arr[length] = {1, 2, 3, 42};
        iter(arr, length, print_el);
        std::cout << std::endl;
    }
    {
        std::cout << "Double:" << std::endl;
        const int length = 4;
        double arr[length] = {1.0, 2.0, 3.0, 4.2};
        iter(arr, length, print_el);
        std::cout << std::endl;
    }
    {
        std::cout << "Float:" << std::endl;
        const int length = 4;
        float arr[length] = {1.0f, 2.0f, 3.0f, 4.2f};
        iter(arr, length, print_el);
        std::cout << std::endl;
    }
    {
        std::cout << "Bool:" << std::endl;
        const int length = 4;
        bool arr[length] = {true, true, true, false};
        iter(arr, length, print_el);
        std::cout << std::endl;
    }
    {
        std::cout << "String:" << std::endl;
        const int length = 2;
        std::string arr[length] = {"Hello", "world"};
        iter(arr, length, print_el);
        std::cout << std::endl;
    }
    return 0;
}
