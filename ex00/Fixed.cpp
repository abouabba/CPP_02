#include "Fixed.hpp"

Fixed::Fixed() {
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
    std::cout << "Copy constructor called" << std::endl;
    this->value = obj.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        value = obj.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
