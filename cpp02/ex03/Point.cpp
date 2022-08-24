#include "Fixed.h"

Point::Point (): x(0), y(0) {}

Point::Point (const Fixed x1, const Fixed y1): x(x1), y(y1) {}

Point::~Point () {}

Point::Point (const Point &other): x(other.x), y(other.y) {}

Point &Point::operator = (const Point &other) {
    (Fixed &)y = other.y;
    (Fixed &)x = other.x;
    return *this;
}

const Fixed &Point::getX() {return x;}

const Fixed &Point::getY() {return y;}

Fixed Point::getPos(Point a, Point b, Point point)
{
    return ((Fixed) point.getX() - (Fixed) a.getX()) * ((Fixed) b.getY() - (Fixed) a.getY()) - \
    ((Fixed) point.getY() - (Fixed) a.getY()) * ((Fixed) b.getX() - (Fixed) a.getX());
}

bool isPositive(Point a, Point b, Point c, Point point) {
    return point.getPos(a, b, c) * point.getPos(a, b, point) >= 0;
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point) {
    return isPositive(a, b, c, point) && isPositive(b, c, a, point) && isPositive(c, a, b, point);
}
