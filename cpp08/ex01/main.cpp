#include "iter.h"



// class Awesome {
// public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
// private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template<typename T >
// void print(T const & x) { std::cout << x <<std:: endl; return; }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; //<--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter(tab, 5, print_el);
//     iter(tab2, 5, print_el);
//     return 0;
// }






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
