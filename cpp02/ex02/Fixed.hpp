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
    Fixed &operator ++ ();
    Fixed operator ++ (int);
    Fixed &operator -- ();
    Fixed operator -- (int);
    Fixed operator + (const Fixed &other);
    Fixed operator * (const Fixed &other);
    Fixed operator / (const Fixed &other);
    Fixed operator - (const Fixed &other);
    bool operator == (const Fixed &other) const;
    bool operator != (const Fixed &other) const;
    bool operator > (const Fixed &other) const;
    bool operator < (const Fixed &other) const;
    bool operator >= (const Fixed &other) const;
    bool operator <= (const Fixed &other) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    static Fixed &min(Fixed &first, Fixed &second);
    const static Fixed &min(const Fixed &first, const Fixed &second);
    static Fixed &max(Fixed &first, Fixed &second);
    const static Fixed &max(const Fixed &first, const Fixed &second);
};
