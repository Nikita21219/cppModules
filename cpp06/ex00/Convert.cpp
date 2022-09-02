#include "convert.h"

Convert::Convert(char *str) {setFloatView(str);}

Convert::~Convert() {}

float Convert::getFloatView() const {return floatView;}

void Convert::setFloatView(char *str) {
    floatView = std::stof(str);
}
void Convert::printValues() {
    printChar();
    printInt();
    printFloat();
    printDouble();
}

void Convert::printFloat() {
    std::cout << "float: ";
    float res = static_cast<float>(floatView);
    std::cout << res;
    printDotZeroIfNeed(res);
    std::cout << "f" << std::endl;
}

void Convert::printDouble() {
    std::cout << "double: ";
    double res = static_cast<double>(floatView);
    std::cout << res;
    printDotZeroIfNeed(res);
    std::cout << std::endl;
}

void Convert::printChar() {
    char res = static_cast<char>(floatView);
    std::cout << "char: ";
    std::cout << "'" << res << "'" << std::endl;
}

void Convert::printInt() {
    int res = static_cast<int>(floatView);
    std::cout << "int: ";
    std::cout << res << std::endl;
}

template<typename T>
void Convert::printDotZeroIfNeed(T num) {
    if (num - static_cast<int>(num) == static_cast<T>(0))
        std::cout << ".0";
}
