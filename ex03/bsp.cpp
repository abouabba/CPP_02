
#include "point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
    Fixed res = a.getX() * (b.getY() - c.getY()) +
                b.getX() * (c.getY() - a.getY()) +
                c.getX() * (a.getY() - b.getY());

    if (res < Fixed(0))
        res = res * Fixed(-1);

    return res / Fixed(2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed total = area(a, b, c); // 50
    Fixed a1 = area(point, b, c); // 4.75
    Fixed a2 = area(a, point, c); // 20.25
    Fixed a3 = area(a, b, point); // 25

    if (a1 == Fixed(0) || a2 == Fixed(0) || a3 == Fixed(0))
        return false;

    return (total == a1 + a2 + a3);
}


