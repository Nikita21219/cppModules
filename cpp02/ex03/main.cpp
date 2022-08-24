#include "Fixed.h"

std::ostream &operator << (std::ostream &out, const Fixed &object) {return out << object.toFloat();}

// https://www.notion.so/Tmp-ex03-cd181caf06804173bbbe56a2a9a612d5
int main() {
    Point a = Point(1, 1);
    Point b = Point(2, 3);
    Point c = Point(5, 2);
    Point point = Point(3, 2);
    std::cout << point.bsp(a, b, c, point) << std::endl;
    return 0;
}
