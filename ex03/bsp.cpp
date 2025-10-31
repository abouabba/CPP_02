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
    Fixed total = area(a, b, c);
    Fixed a1 = area(point, b, c);
    Fixed a2 = area(a, point, c);
    Fixed a3 = area(a, b, point); 

    if (a1 == Fixed(0) || a2 == Fixed(0) || a3 == Fixed(0))
        return false;

    return (total == a1 + a2 + a3);
}


