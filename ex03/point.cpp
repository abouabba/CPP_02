#include "point.hpp"

Point::Point() : x(0), y(0) {};

Fixed Point::getX() const
{
    return this->x;
}

Fixed Point::getY() const
{
    return this->y;
}

Point::Point(Point const &src) : x(src.x), y(src.y) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::~Point() {}