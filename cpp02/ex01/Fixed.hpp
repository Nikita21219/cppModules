#include "Fixed.h"

class Fixed {
private:
    int fixedPoint;
    static const int fractionalBits;

public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator = (const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};
