#include "Fixed.h"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = other.getRawBits();
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPoint;
}

Fixed &Fixed::operator = (const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = other.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw) {
    fixedPoint = raw;
}
