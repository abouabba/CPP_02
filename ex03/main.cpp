#include "point.hpp"

// bool bsp( Point const a, Point const b, Point const c, Point const point);

int main() {
    Point a(0, 0);
    Point b(0, 10);
    Point c(10, 0);
    Point p(5, 4.05);

    if(bsp(a, b, c, p))
        std::cout << "the point is inside the triangle" << std::endl;
    else
        std::cout << "the point is outside the triangle" << std::endl;
}
