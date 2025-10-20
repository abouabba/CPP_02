#ifndef FIXED_HPP
#define FIXED_HPP

# include <cmath>
#include <iostream>

class Fixed {
    private:
        int value;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        float operator*(const Fixed &n2);
        float operator+(const Fixed &n2);
        float operator-(const Fixed &n2);
        float operator/(const Fixed &n2);
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static const Fixed &min(const Fixed &other1, const Fixed &other2);
        static const Fixed &max(const Fixed &other1, const Fixed &other2);
        static Fixed &min(Fixed &other1, Fixed &other2);
        static Fixed &max(Fixed &other1, Fixed &other2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
