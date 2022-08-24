#include "Fixed.h"

class Point {
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    Point(const Fixed x1, const Fixed y1);
    Point(const Point &other);
    ~Point();
    Point &operator = (const Point &other);
    bool bsp(Point const a, Point const b, Point const c, Point const point);
    // const bool isPositive(Point a, Point b, Point c, Point point);
    const Fixed &getX();
    const Fixed &getY();
    Fixed getPos(Point a, Point b, Point point);
};
