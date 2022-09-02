#include "convert.h"

Convert::Convert(char *str) {setFloatView(str);}

Convert::~Convert() {}

float Convert::getFloatView() const {return floatView;}

void Convert::setFloatView(char *str) {
    try {
        floatView = std::stof(str);
    }
    catch (std::invalid_argument e) {
        if (strlen(str) == 1 && str[0] >= 0 && str[0] <= 127) {
            floatView = str[0];
            return ;
        }
        std::cout << e.what() << std::endl;
        exit(1);
    }
    catch (std::out_of_range e) {
        std::cout << e.what() << std::endl;
        exit(1);
    }
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
    if (std::isnan(floatView) || floatView < 0 || floatView > 127)
        std::cout << "impossible" << std::endl;
    else if (res >= 0 && res <= 32)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << res << "'" << std::endl;
}

void Convert::printInt() {
    int res = static_cast<int>(floatView);
    std::cout << "int: ";
    if (isnan(floatView))
        std::cout << "impossible" << std::endl;
    else if (floatView > INT_MAX || floatView < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << res << std::endl;
}

template<typename T>
void Convert::printDotZeroIfNeed(T num) {
    if (num - static_cast<int>(num) == static_cast<T>(0))
        std::cout << ".0";
}
