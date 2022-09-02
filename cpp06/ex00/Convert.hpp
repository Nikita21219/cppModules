#include "convert.h"


class Convert {
private:
    float floatView;

public:
    Convert(char *str);
    ~Convert();
    float getFloatView() const;
    void setFloatView(char *str);
    void printValues();
    void printFloat();
    void printDouble();
    void printChar();
    void printInt();
    
    template<typename T>
    void printDotZeroIfNeed(T num);
};
