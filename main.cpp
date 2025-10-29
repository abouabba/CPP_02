#include <iostream>
# include "point.hpp"

int main() {
    Point p1(10, 20);
    Point p2(5, 7);

    // Using the overloaded '+' operator
    Point p3 = p1 - p2; 

    std::cout << "Point 1: ";
    p1.display();
    std::cout << "Point 2: ";
    p2.display();
    std::cout << "Sum of Points: ";
    p3.display(); // Expected output: (15, 27)

    return 0;
}
