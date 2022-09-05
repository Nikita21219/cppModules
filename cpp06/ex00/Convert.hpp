#include "convert.h"


class Convert {
private:
    double floatView;

public:
    Convert(char *str);
    ~Convert();
    double getFloatView() const;
    void setFloatView(char *str);
    void printValues();
    void printFloat();
    void printDouble();
    void printChar();
    void printInt();

    template<typename T>
    void printDotZeroIfNeed(T num);
};
