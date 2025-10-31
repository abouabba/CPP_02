#include "Fixed.hpp"

Fixed::Fixed() {
    value = 0;
}

Fixed::Fixed(const int value) {
    this->value = value << fractional_bits;
    // std::cout << value << std::endl;
}

Fixed::Fixed(const float value) {
    this->value = roundf(value * (1 << fractional_bits));
    // std::cout << value << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
    // std::cout << value << std::endl;
    this->value = obj.getRawBits();
}

int Fixed::toInt() const {
    return value >> fractional_bits;
}

float Fixed::toFloat() const {
    return (float)value / (1 << fractional_bits); 
}

Fixed &Fixed::operator=(const Fixed &obj) {
    // std::cout << value << std::endl;
    value = obj.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

int Fixed::getRawBits() const {
    return value;
}

Fixed::~Fixed() {}

float Fixed::operator*(const Fixed &other)
{
    float a = this->toFloat() * other.toFloat();
    return(a);
}

float Fixed::operator+(const Fixed &other)
{
    return(this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed &other)
{
    return(this->toFloat() - other.toFloat());
}

float Fixed::operator/(const Fixed &other)
{
    return(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed Fixed::operator--()
{
    this->value--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->value++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->value--;
    return temp;
}

Fixed &Fixed::max(Fixed &other1, Fixed &other2)
{
    if(other1.value <= other2.value)
        return other2;
    return other1;
}

Fixed &Fixed::min(Fixed &other1, Fixed &other2)
{
    if(other1.value <= other2.value)
        return other1;
    return other2;
}

const Fixed &Fixed::max(Fixed const &other1, Fixed const &other2)
{
    if(other1.value <= other2.value)
        return other2;
    return other1;
}

const Fixed &Fixed::min(Fixed const &other1, Fixed const &other2)
{
    if(other1.value <= other2.value)
        return other1;
    return other2;
}

bool Fixed::operator>(const Fixed &other) const {
    return this->value > other.value;
}

bool Fixed::operator<(const Fixed &other) const {
    return this->value < other.value;
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->value <= other.value;
}

bool Fixed::operator==(const Fixed &other) const {
    return this->value == other.value;
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->value != other.value;
}
std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
    out << obj.toFloat();
    return out;
}
