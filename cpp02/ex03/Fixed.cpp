#include "Fixed.h"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() {
    // std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
}

Fixed::Fixed(const int num) {
    this->setRawBits(num << fractionalBits);
}

Fixed::Fixed(const float num) {
    this->setRawBits((int)(roundf(num * (1 << this->fractionalBits))));
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    // std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = other.getRawBits();
}

int Fixed::getRawBits(void) const {
    return this->fixedPoint;
}

Fixed &Fixed::operator = (const Fixed &other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = other.getRawBits();
    return *this;
}

Fixed Fixed::operator + (const Fixed &other) {
    Fixed newFixed;
    newFixed.setRawBits(this->fixedPoint + other.fixedPoint); 
    return newFixed;
}

Fixed Fixed::operator - (const Fixed &other) {
    Fixed newFixed;
    newFixed.fixedPoint = this->fixedPoint - other.fixedPoint;
    return newFixed;
}

Fixed Fixed::operator * (const Fixed &other) {
    Fixed newFixed;
    newFixed.fixedPoint = (this->fixedPoint * other.fixedPoint) >> fractionalBits;
    return newFixed;
}

Fixed Fixed::operator / (const Fixed &other) {
    Fixed newFixed;
    newFixed.fixedPoint = (this->fixedPoint << fractionalBits) / other.fixedPoint;
    return newFixed;
}

Fixed &Fixed::operator ++ () {
    this->fixedPoint++;
    return *this;
}

Fixed &Fixed::operator -- () {
    this->fixedPoint--;
    return *this;
}

Fixed Fixed::operator ++ (int) {
    Fixed tmp(*this);
    this->fixedPoint++;
    return tmp;
}

Fixed Fixed::operator -- (int) {
    Fixed tmp(*this);
    this->fixedPoint--;
    return tmp;
}

bool Fixed::operator == (const Fixed &other) const {
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator != (const Fixed &other) const {
    return this->getRawBits() != other.getRawBits();
}

bool Fixed::operator > (const Fixed &other) const {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator < (const Fixed &other) const {
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator >= (const Fixed &other) const {
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator <= (const Fixed &other) const {
    return this->getRawBits() <= other.getRawBits();
}

void Fixed::setRawBits(int const raw) {
    fixedPoint = raw;
}

float Fixed::toFloat(void) const {
    return ((float)this->getRawBits() / (float)(1 << this->fractionalBits));
}

int Fixed::toInt(void) const {
    return this->getRawBits() >> this->fractionalBits;
}

Fixed &Fixed::min(Fixed &first, Fixed &second) {
    return first < second ? first : second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
    return first < second ? first : second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
    return first > second ? first : second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {
    return first > second ? first : second;
}
