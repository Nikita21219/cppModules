#include "Fixed.h"

class Fixed {
private:
    int fixedPoint;
    static const int fractionalBits;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator = (const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
